package mypack;

public class PartTimeEmployee_3 extends Employee_3 {
    private int workingHours;

    public PartTimeEmployee_3(String name, int paymentPerHour, int workingHours) {
        super(name, paymentPerHour);
        this.workingHours = workingHours;
    }

    @Override
    public int calculateSalary() {
        return workingHours * super.getPaymentPerHour();
    }
}
