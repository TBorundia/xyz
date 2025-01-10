package chainResponsibilityPattern;

public class complaintEmailHandler extends EmailHandler {
    void handleRequest(EmailRequest emailReq){
        if(emailReq.type.equals("Complaint Email")){
            System.out.println("Email is for .....");
        }
        else{
            if(nextHandler!=null){
                nextHandler.handleRequest(emailReq);
            }
        }
    }
}
