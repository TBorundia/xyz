function alphavalidate()
{
    var name=document.getElementById("alpha");
    var letter=/^[A-Za-z]*$/;
    if(name.value.match(letter))
    {
        return true;
    }
    else
    {
        alert("enter letters only.");
        alpha.focus();
        return false;
    }
}