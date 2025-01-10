public class Main {
    public static void main(String[] args) {
        ReportingManager rm1 = new ReportingManager(10);
        ReportingManager2 rm2 = new ReportingManager2(10);
        Director dir = new Director(10);

        rm1.setSuccessor(rm2);
        rm2.setSuccessor(dir);

        rm1.handleRequest(200);
    }
}