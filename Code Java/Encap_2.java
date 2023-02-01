import mypack.Point;

public class Encap_2 {
    public static void main(String[] args)
    {
        Point p1 = new Point(0,0);
        System.out.println(p1.distance(4,3));
        Point p2 = new Point(10,20);
        System.out.println(p2.distance(p1));

    }
}
