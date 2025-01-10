class ReportingManager2 extends LeaveRequest {
    ReportingManager2(int day) {
        super(day);
    }

    @Override
    void handleRequest(int day) {
        if (day >= 5 && day<=15) {
            System.out.println("Handled by Reporting Manager 2");
        } else {
            if (nextHandler != null) {
                nextHandler.handleRequest(day);
            }
        }
    }
}