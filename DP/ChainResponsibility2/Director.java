class Director extends LeaveRequest {
    Director(int day) {
        super(day);
    }

    @Override
    void handleRequest(int day) {
        if (day > 15) {
            System.out.println("Handled by Director");
        } else {
            if (nextHandler != null) {
                nextHandler.handleRequest(day);
            }
        }
    }
}
