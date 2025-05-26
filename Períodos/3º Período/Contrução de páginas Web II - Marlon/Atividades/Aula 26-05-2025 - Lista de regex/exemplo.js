function validar(){
    const data = document.getElementById('data').value;
    const regex_data = /^(0[1-9]|[12][0-9]|3[01])\/(0[1-9]|1[0-2])\/\d{4}$/;
    const resultado = regex_data.test(data);

    if(resultado && data.length == 9) {
       document.getElementById('resposta').innerHTML = 'Data válida';
        document.getElementById('resposta').style.color = 'green';
    }else{
        document.getElementById('resposta').innerHTML = 'Data inválida';
        document.getElementById('resposta').style.color = 'red';
    }
}