function newvalidate()
{
    var country=document.getElementById("con");
    var struser = country.options[country.selectedIndex].value;
    if(struser==0)
    {
        alert("select country");
        return false;
    }
    else
    {
        return true;
    }
}