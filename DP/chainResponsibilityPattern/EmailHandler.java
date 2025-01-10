package chainResponsibilityPattern;

abstract class EmailHandler {
    EmailHandler nextHandler;

    void setSuccessor(EmailHandler nextHandler){
    }
    abstract void handleRequest(EmailRequest emailReq);
}
