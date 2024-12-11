function formvalidate()
{
    var name=document.getElementById("n");
    var password=document.getElementById("pass");
    var repassword=document.getElementById("repass");

    if(name.value=="" || password.value=="")
    {
        alert("fill name");
        return false;
    }
    else if(password.value!=repassword.value)
    {
        alert("enter same password")
        return false;
    }
}
