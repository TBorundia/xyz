package chainResponsibilityPattern;

public class fanEmailHandler extends EmailHandler{
    void handleRequest(EmailRequest emailReq){
        if(emailReq.type.equals("Fan Email")){
            System.out.println("Email is for CEO");
        }
        else{
            if(nextHandler!=null){
                nextHandler.handleRequest(emailReq);
            }
        }
    }
}
