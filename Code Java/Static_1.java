// biến static và phương thức static trong java 
// biến và kiểu dữ liệu staiic có thể được gọi đến mà không cần tạo đối tượng 
// biến kiểu static được chia sẻ với tất cả các đối tượng trong chương trình, tức là biến dùng chung bởi các đối tượng 
// Biến static không phải 1 thuộc tính do nó không thuộc bất kì đối tượng nào 
// Pthuc static có thể gọi tới mà không cần tạo đối tượng 
// Pthuc static chỉ có thể gọi tới đước các pthuc static khác 
// Pthuc static k thể gọi tới thuộc tính kp stattic 

//static bieu dien bang dau gach duoi trong so do lop

import mypack.ArrayCalculator_1;

public class Static_1 {
    public static void main(String[] args)
    {
        int[] a1 = new int[] {1,2,3,4,5,6,7,8};
        double[] a2 = new double[] {10,3.2,5.3,4.4};
        System.out.println(ArrayCalculator_1.maxOfArray(a1));
        System.out.println(ArrayCalculator_1.minOfArray(a1));
        System.out.println(ArrayCalculator_1.maxOfArray(a2));
        System.out.println(ArrayCalculator_1.minOfArray(a2));
    }
    
}
