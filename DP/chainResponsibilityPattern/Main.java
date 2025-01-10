package chainResponsibilityPattern;

public class Main {
    public static void main(String[] args) {
        EmailRequest emailReq=new EmailRequest("Spam Email","Congratulations! You won $1200000");

        requestEmailHandler rm=new requestEmailHandler();
        fanEmailHandler fm=new fanEmailHandler();
        complaintEmailHandler cm=new complaintEmailHandler();
        spamEmailHandler sm= new spamEmailHandler();

        sm.setSuccessor(fm);
        fm.setSuccessor(cm);
        cm.setSuccessor(rm);
        sm.handleRequest(emailReq);
    }
}
