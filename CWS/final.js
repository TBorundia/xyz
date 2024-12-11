function finalvalidate()
{
    var username=document.getElementById("uname");
    var password=document.getElementById("pass");
    var repassword=document.getElementById("repass");
    var number=document.getElementById("num");
    var fullname=document.getElementById("name");
    var address=document.getElementById("add");
    var email=document.getElementById("ema");

    if(username.value=="")
    {
        alert("username can't be blank.");
        return false;
    }
    else if(password.value=="" || repassword.value=="")
    {
        alert("please enter password");
        return false;
    }
    else if(password.length<6)
    {
        alert("password length must be larger than 6.");
        return false;
    }
    else if(password.value!=repassword.value)
    {
        alert("password and repassword must be same.");
        return false;
    }
    else if(fullname.value=="")
    {
        alert("please enter full name")
        return false;
    }
    else if(number.value=="")
    {
        alert("please enter number.")
        return false;
    }
    else if(address.value=="")
    {
        alert("please enter address");
        return false;
    }
    else if(email.value=="")
    {
        alert("please enter email");
        return false;
    }

}
function alphavalidate()
{
    var fullname=document.getElementById("name")
    var letter=/^[A-Za-z]/
    if(fullname.value.match(letter))
    {
        return true;
    }
    else
    {
        alert("enter letters only.")
        return false;
    }
}
function numvalidate()
{
    var number=document.getElementById("num")
    var letter=/^[0-9]*$/;
    if(number.value.match(letter))
    {
        return true;
    }
    else
    {
        alert("only number");
        return false;
    }
}
function addressvalidate()
{
    var address=document.getElementById("add")
    var letter=/^[A-Za-z0-9]*$/;
    if(address.value.match(letter))
    {
        return true;
    }
    else
    {
        alert("enter valid address");
        return false;
    }
}
function emailvalidate()
{
    var email=document.getElementById("ema");
    var letter=/^\w+([\.-]?\w+)*@\w+([\.-]?\w+)*(\.\w{2,3})+$/;
    if(email.value.match(letter))
    {
        return true;
    }
    else
    {
        alert("enter valid email");
        return false;
    }
}