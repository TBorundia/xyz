class ReportingManager extends LeaveRequest {
    ReportingManager(int day) {
        super(day);
    }

    @Override
    void handleRequest(int day) {
        if (day < 5) {
            System.out.println("Handled by Reporting Manager 1");
        } else {
            if (nextHandler != null) {
                nextHandler.handleRequest(day);
            }
        }
    }
}