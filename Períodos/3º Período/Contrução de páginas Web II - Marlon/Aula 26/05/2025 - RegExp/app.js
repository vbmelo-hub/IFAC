function validar(){

    const cep = document.getElementById('cep').value;
    const regex_cep = /[0-9]{2}\.[0-9]{3}-[0-9]{2}/;
    const resultado = regex_cep.test(cep);

    if(resultado && cep.length == 9){
        document.getElementById('resposta').innerHTML = 'CEP válido';
        document.getElementById('resposta').style.color = 'green';
    }else{
        document.getElementById('resposta').innerHTML = 'CEP inválido';
        document.getElementById('resposta').style.color = 'red';
    }
}