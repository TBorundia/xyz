function numbervalidate()
{
    var number=document.getElementById("num");
    var letter=/^\w+([\.-]?\w+)*@\w+([\.-]?\w+)*(\.\w{2,3})+$/
    if(number.value.match(letter))
    {
        return true;
    }
    else
    {
        alert("enter number only.");
        num.focus();
        return false;
    }
}