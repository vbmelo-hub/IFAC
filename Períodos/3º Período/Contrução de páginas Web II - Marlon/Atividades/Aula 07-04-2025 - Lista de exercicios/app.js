
function mostrarDados(){
let numero =
    document.getElementById('numero').value;

if (numero % 2 == 0) {
    document.getElementById('resposta').innerText = 'O número é par';
}
else {
    document.getElementById('resposta').innerText = 'O número é impar';
}
}

function mostrarDados2(){
    let altura =
        document.getElementById('altura').value;
    let peso = 
        document.getElementById('peso').value;

    imc = peso / (altura ** 2);

    document.getElementById('resposta2').innerText = (imc.toFixed(1));
}

function mostrarDados3(){
    let 
}