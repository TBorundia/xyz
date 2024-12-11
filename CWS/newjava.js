function validateform()
{
    var name=document.myform.name.value;
    var password=document.myform.password.value;
    var repassword=document.myform.repassword.value;
    if(name==null||name=="")
    {
        alert("Name can't be blank");
        return false;
    }
    else if(password.length<6)
    {
        alert("password must be at least 6 characters long");
    return false;
    }
    else if(password!=repassword)
    {
        alert("not match to password");
    return false;
    }
}


