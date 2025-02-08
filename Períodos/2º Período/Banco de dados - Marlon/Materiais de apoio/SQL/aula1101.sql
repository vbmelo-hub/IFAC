-- phpMyAdmin SQL Dump
-- version 5.2.0
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Tempo de geração: 11-Jan-2025 às 17:17
-- Versão do servidor: 10.4.25-MariaDB
-- versão do PHP: 8.1.10

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Banco de dados: `aula1101`
--

-- --------------------------------------------------------

--
-- Estrutura da tabela `alunos`
--

CREATE TABLE `alunos` (
  `matricula` int(11) NOT NULL,
  `nome` varchar(255) DEFAULT NULL,
  `idade` int(11) DEFAULT NULL,
  `telefone` varchar(13) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Extraindo dados da tabela `alunos`
--

INSERT INTO `alunos` (`matricula`, `nome`, `idade`, `telefone`) VALUES
(1, 'Pedro', 15, '555'),
(2, 'Ana', 19, NULL),
(4, 'Carlos', 22, NULL),
(5, 'Joao', 12, NULL),
(6, 'Roberto', 22, NULL),
(7, 'Carla', 25, NULL),
(8, 'Alex', 23, NULL);

-- --------------------------------------------------------

--
-- Estrutura da tabela `enderecos`
--

CREATE TABLE `enderecos` (
  `id` int(11) NOT NULL,
  `rua` varchar(255) DEFAULT NULL,
  `numero` int(11) DEFAULT NULL,
  `matricula_alunos` int(11) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Extraindo dados da tabela `enderecos`
--

INSERT INTO `enderecos` (`id`, `rua`, `numero`, `matricula_alunos`) VALUES
(1, 'Rua dos Andradas', 50, NULL);

--
-- Índices para tabelas despejadas
--

--
-- Índices para tabela `alunos`
--
ALTER TABLE `alunos`
  ADD PRIMARY KEY (`matricula`);

--
-- Índices para tabela `enderecos`
--
ALTER TABLE `enderecos`
  ADD PRIMARY KEY (`id`),
  ADD KEY `matricula_alunos` (`matricula_alunos`);

--
-- Restrições para despejos de tabelas
--

--
-- Limitadores para a tabela `enderecos`
--
ALTER TABLE `enderecos`
  ADD CONSTRAINT `enderecos_ibfk_1` FOREIGN KEY (`matricula_alunos`) REFERENCES `alunos` (`matricula`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
