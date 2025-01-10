package chainResponsibilityPattern;

public class spamEmailHandler extends EmailHandler{
    void handleRequest(EmailRequest emailReq){
        if(emailReq.type.equals("Spam Email")){
            System.out.println("Email is spam, Deleted");
        }
        else{
            if(nextHandler!=null){
                nextHandler.handleRequest(emailReq);
            }
        }
    }
}
