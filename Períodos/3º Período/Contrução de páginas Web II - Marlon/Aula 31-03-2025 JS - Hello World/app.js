function voltar(){
    history.back();
}

function avancar(){
    history.forward();
}

function loc(){
    navigator.geolocation.getCurrentPosition(
        (position) => {
          console.log("Latitude:", position.coords.latitude);
          console.log("Longitude:", position.coords.longitude);
        },
        (error) => {
          console.error("Erro ao obter localização:", error.message);
        }
      );
}

function paragrafo(){
    alert("VOCE MATOU ELE!!!! SEU MONSTRO >:c");
    document.getElementById('p1').innerHTML = "Voltar";
    document.getElementById('p1').style.color = 'blue';
    document.getElementById('p2').style.display = 'none';
    //document.getElementById('p2').style.visibility = "hidden"; <--- Alternativa
}

function paragrafo2(){
    document.getElementById('p1').innerHTML = "Avançar";
    document.getElementById('p1').style.color = 'red';
    document.getElementById('p2').style.display = 'block';
    //document.getElementById('p2').style.visibility = "visible"; <--- Alternativa
}