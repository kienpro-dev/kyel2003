package mypack;

public class FullTimeEmployee_3 extends Employee_3 {
    public FullTimeEmployee_3(String name, int paymentPerHour) {
        super(name, paymentPerHour);
    }

    @Override
    public int calculateSalary() {
        return 8 * super.getPaymentPerHour();
    }
}
