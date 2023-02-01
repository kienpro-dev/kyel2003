// - Tính đóng gói(Encapsulation) là kĩ thuật giúp bạn che giấu được những thông tin bên trong đối tượng
// - Mục đích của tính đóng gói là hạn chế các lỗi khi phát triển chương trình

class Student
{
public:
    string name;
    int age;
};

// Ở ví dụ trên các thuộc tính của đối tượng là public dẫn tới phạm vi truy cập của nó từ bất kì đâu
// Trên thực tế ta cần hạn chế thuộc tính có phạm vi truy cập public

// Ta nên để phạm vi truy cập là public và truy xuất tới biến đó bằng phươg thức phạm vi public được gọi là getter, setter

class Teacher
{
private:
    string name;
    int id;

public:
    string getName()
    {
        return name;
    }
    void setName(string name)
    {
        this->name = name;
    }
    int getId() 
    { 
        return id; 
    }
    void setId(int id) 
    { 
        this->id = id; 
    }
};

// Với cách này thì thông tin của các đối tượng đã đc ẩn đi, bạn chỉ có thể giao tiếp với thuộc tính thông qua phương thức



