// Up casting và down casting trong oop
// Up casting là khi biến của lớp cha tham chiếu đến biến lớp con
//            biến này chỉ có thể gọi tới thuộc tính và phương thức của lớp cha, TH bi ghi de thi se goi phuong thuc cua lop con 

// down casting ngược lại với up casting, chuyển từ lớp con sang lớp cha 

class Animal {
    public void sound() {
        System.out.println("Something");
    }
};

class Cat extends Animal {
    public void sound() {
        System.out.println("Mew mew");
    }
};

class Dog extends Animal {
    public void sound() {
        System.out.println("gof gof");
    }

    public void play() {
        System.out.println("The dog is playing");
    }
};

public class Inherit_4 {
    public static void main(String[] args) {
        Animal dog = new Dog(); // up casting
        Animal cat = new Cat(); // up casting
        dog.sound();
        cat.sound();
        // hương thức sound lớp con sẽ ghi đè cho lớp cha

        // TH lớp con có phương thức khác lớp cha mà vẫn muốn gọi tới thì phải dùng down
        // casting
        // dog.play(); sai vì class animal k có phương thức play
        ((Dog) dog).play(); // down casting

    }
}
