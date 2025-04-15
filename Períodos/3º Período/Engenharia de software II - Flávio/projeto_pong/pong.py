import pygame
import sys

# Configurações básicas
WIDTH, HEIGHT = 800, 600
BALL_SPEED = [5, 5]
PADDLE_SPEED = 7

# Cores
WHITE = (255, 255, 255)
BLACK = (0, 0, 0)

# Inicialização do pygame
pygame.init()
screen = pygame.display.set_mode((WIDTH, HEIGHT))
pygame.display.set_caption("Pong")
clock = pygame.time.Clock()

# Classes
class Paddle:
    def __init__(self, x):
        self.rect = pygame.Rect(x, HEIGHT // 2 - 60, 10, 120)
    
    def move(self, keys, up, down):
        if keys[up] and self.rect.top > 0:
            self.rect.y -= PADDLE_SPEED
        if keys[down] and self.rect.bottom < HEIGHT:
            self.rect.y += PADDLE_SPEED
    
    def draw(self):
        pygame.draw.rect(screen, WHITE, self.rect)

class Ball:
    def __init__(self):
        self.rect = pygame.Rect(WIDTH // 2 - 10, HEIGHT // 2 - 10, 20, 20)
        self.speed = BALL_SPEED[:]
    
    def move(self):
        self.rect.x += self.speed[0]
        self.rect.y += self.speed[1]
        
        if self.rect.top <= 0 or self.rect.bottom >= HEIGHT:
            self.speed[1] = -self.speed[1]
    
    def draw(self):
        pygame.draw.ellipse(screen, WHITE, self.rect)

def save_score(score1, score2):
    with open("pontuacoes.txt", "a") as file:
        file.write(f"Jogador 1: {score1} - Jogador 2: {score2}\n")

def main():
    paddle1 = Paddle(20)
    paddle2 = Paddle(WIDTH - 30)
    ball = Ball()
    score1, score2 = 0, 0

    running = True
    while running:
        screen.fill(BLACK)
        keys = pygame.key.get_pressed()

        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                running = False

        paddle1.move(keys, pygame.K_w, pygame.K_s)
        paddle2.move(keys, pygame.K_UP, pygame.K_DOWN)
        ball.move()

        if ball.rect.colliderect(paddle1.rect) or ball.rect.colliderect(paddle2.rect):
            ball.speed[0] = -ball.speed[0]

        if ball.rect.left <= 0:
            score2 += 1
            ball = Ball()
        if ball.rect.right >= WIDTH:
            score1 += 1
            ball = Ball()

        paddle1.draw()
        paddle2.draw()
        ball.draw()
        
        pygame.display.flip()
        clock.tick(60)
    
    save_score(score1, score2)
    pygame.quit()
    sys.exit()

if __name__ == "__main__":
    main()
