function gendervalidate()
{
    var gender=document.getElementById("m");
    if(gender.value=="")
    {
        alert("select male/female.")
        return false;
    }
    else
    {
        return true;
    }
}