class ChocolateBoiler{
    private boolean empty;
    private boolean boiled;
    private static ChocolateBoiler c;
    private ChocolateBoiler(){
        empty=true;
        boiled=false;
    }
    public static synchronized ChocolateBoiler getInstance(){
        if(c==null){
            c=new ChocolateBoiler();
        }
        return c;
    }
    public boolean isEmpty(){
        return empty;
    }
    public boolean isBoiled(){
        return boiled;
    }
    public void fill(){
        if(isEmpty()){
            empty=false;
        }
    }
    public void drain(){
        if(!isEmpty() && isBoiled()){
           empty=true;
        }
    }
    public void boil(){
        if(!isEmpty() && isBoiled()){
            boiled=true;
        }
    }
}
        