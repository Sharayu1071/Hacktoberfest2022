
var randomNumber1 = Math.floor(Math.random() * 6) + 1;
var randomimage1 = "dice"+randomNumber1+".png";
document.querySelectorAll("img")[0].setAttribute("src",randomimage1);

var randomNumber2 = Math.floor(Math.random() * 6) + 1;
var randomimage2 = "dice"+randomNumber2+".png";
document.querySelectorAll("img")[1].setAttribute("src",randomimage2);

if(randomNumber1>randomNumber2)
{
    document.querySelectorAll("h1")[0].innerHTML="&#127881 Player 1 Won ";
}
else if(randomNumber2>randomNumber1)
{
    document.querySelectorAll("h1")[0].innerHTML="Player 2 Won &#127881";
}
else
{
    document.querySelectorAll("h1")[0].innerHTML="Draw &#x3D; ";
}

function refreshPage(){
    window.location.reload();
}
