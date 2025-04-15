// let é uma variável local, enquanto var é uma variavel global. Entretanto, se let for usado fora do escopo (função), logo se tornará uma variavel global.

let x;
let y;

x = 5;
y = '5';

if(x == y){ //== Igual | === Identico
    console.log('é');
}else{
    console.log('não');
}

// Data  Types
// Objeto:
const person = {firstName:"John", lastName:"Doe", age:15};

//------------------------------------------------

function mostrarDados(){
    let nome = 
    document.getElementById('nome').value;
    document.getElementById('resposta').innerText = nome;

    let estado =
    document.getElementById('estado').value;
    document.getElementById('resposta2').innerText = estado;

    let cor =
    document.getElementById('cor').value;
    document.getElementById('resposta').style.color = cor;

    let radio = document.getElementsByName("email");
    for (let i = 0; i < radio.length; i++) {
        if (radio[i].checked) {
            console.log("Escolheu " + radio[i].value)
        }
    }
    let checkboxes = document.getElementsByName('sentido');
    for(let i=0; i<checkboxes.length;i++){
        if(checkboxes[i].checked){
            console.log("Seleciou: " + checkboxes[i].value);
        }
    }
}