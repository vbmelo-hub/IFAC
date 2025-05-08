function myFunction() {
    const nome = document.getElementById('nome').value;
    const tamanho = nome.length;
    document.getElementById('tamanho').innerHTML = tamanho;
    console.log(tamanho);
}