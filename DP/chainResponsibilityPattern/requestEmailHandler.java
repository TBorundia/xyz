package chainResponsibilityPattern;

public class requestEmailHandler extends EmailHandler{
    void handleRequest(EmailRequest emailReq){
        if(emailReq.type.equals("Request Email")){
            System.out.println("Email is requested to business department.");
        }
        else{
            if(nextHandler!=null){
                nextHandler.handleRequest(emailReq);
            }
        }
    }
}
