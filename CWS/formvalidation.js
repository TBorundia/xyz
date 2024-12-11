function validateform()
{
    var userid=document.myform.userid;
    var pass=document.myform.password;
    var na=document.myform.name;
    var cou=document.myform.country;
    var gen=document.myform.gender;
    var len=document.myform.lang;
    var zip=document.myform.zipcode;
    var ema=document.myform.email;

    if(userid.value.length==null || userid.value.length=="" || userid.value.length<5 || userid.value.length>12)
    {
        alert("Name must be of length 5 to 12");
        userid.focus();
        return false;
    }
    if(pass.value.length==null || pass.value.length=="" || userid.value.length<7 || userid.value.length>12)
    {
        alert("Password must be of length 7 to 12");
        pass.focus();
        return false;
    }
    if(na.value.length<=0)
    {
        alert("Name required.");
        return false;
    }
    if(cou.value =="select")
    {
        alert("Country name required");
        cou.focus();
        return false;
    }
    if(zip.value.length==null||zip.value.length==""||zip.value.length<0)
    {
        alert("Zip Code required");
        zip.focus();
        return false;
    }
    if(ema.value.length<=0)
    {
        alert("Email address required.");
        return false;
    }
    if(gen.value.length<=0)
    {
        alert("Select gender");
        return false;
    }
    var check = false;
    for(var i = len.length -1; i>=0; i--) 
    {
        if(len[i].checked)
        {
            check = true;
        }
    }
    if(check == false)
    {
        alert("Select Language");
        return false;
    }
}
    function validateString(id)
    {
        var element=document.getElementById(id);
        var letters= /^[A-Za-z]+$/;
        if( element==null || element=="" || !letters.ltest(element.value))
        {
            alert("Alphabets only.");
            element.style.border = "2px solid red";
            return false;
        }
        else
        { 
            element.style.border= "2px solid green";
            return true;
        }
    }
    function validatenumber(id)
    {
        var element=document.getElementById(id);
        var numbers = /^[0-9]+$/;
        if( element==null || element=="" || !numbers.test(element.value))
        {   
            alert("Numbers only");
            element.style.border = "2px solid red";
            return false; 
        }
        else
        {
        element.style.border = "2px solid green";
        return true;
        }
    }
    function validateEmail(id)
    {
        var element=document.getElementById(id);
        var letters= /^\w+([\.-]?\w+)*@\w+([\.-]?\w+)*(\.\w{2,3})+$/;
        if( element==null || element=="" || !letters.test(element.value))
        {
            alert("Enter valid Email address.");
            element.style.border = "2px solid red";
            return false;
        }
        else
        {
        element.style.border = "2px solid green";
        return true;
    }
}