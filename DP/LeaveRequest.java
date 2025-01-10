package ChainResponsibility2;

abstract class LeaveRequest {
    int day;
    LeaveRequest nextHandler;

    LeaveRequest(int day) {
        this.day = day;
    }

    void setSuccessor(LeaveRequest nextHandler) {
        this.nextHandler = nextHandler;
    }

    abstract void handleRequest(int day);
}