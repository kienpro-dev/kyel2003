// Quan hệ giữa các đối tượng
// Chia làm 2 loại chính
// - Quan hệ phụ thuộc
// - Quan hệ kết hợp(Association), được chia làm 2 loại:
//          + Quan hệ thu nạp(Aggregation)
//          + Quan hệ hợp thành(Composition)

// VD: Quan hệ phục thuộc: Là quan hệ mà đối tượng lớp này sử dụng đối tượng lớp kia
//          Nếu lớp a sử dụng đối tượng(thuộc tính, biến cục bộ, tham số, ..) của lớp b
//          thì nói lớp a có phụ thuộc vào lớp b
// Đây là quan hệ rộng nhất và được biểu diễn bằng mũi tên nét đứt

class ClassA
{
public:
    void myMethod(ClassB b)
    {
        b.doWork(); // quan hệ phụ  thuộc
    }
}

// VD: Quan hệ kết hợp: xảy ra khi 1 đối tượng có thuộc tính là đối tượng khác
//                      (Hay nói cách khác là lớp này khai báo thuộc tính bằng lớp khác)

// 1: Quan hệ thu nạp
// Biểu diễn bằng mũi tên hình thoi trắng
class Manager
{
private:
    string name;

public:
    Manager()
    {
    }
    Manager(string name)
    {
        this->name = name;
    }

    string getName()
    {
        return name;
    }
};

class Employee
{
private:
    string name;
    Manager manager; // quan hệ kết hợp(thu nạp)

public:
    Employee(string name, Manager manager)
    {
        this->name = name;
        this->manager = manager;
    }

    string getManagerName()
    {
        return manager.getName();
    }

    string getName()
    {
        return name;
    }
};

// 2: quan hệ hợp thành là khi đối tượng lớp b là 1 phần của đối tượng lớp a, nếu đối tượng của lớp a bị hủy thì dối tượng của lớp b cx hủy theo
// Ví dụ: mối quan hệ giữa File và Folder, một Folder sẽ có nhiều File và nếu Folder bị hủy thì File cũng bị hủy theo

// Biểu diễn bằng mũi tên hình thoi đen (có đánh số 1 và kí tự * thể hiện 1 cái bên này có thể có nhiều cái bên kia bên trong nó )

class ClassA
{
private:
    ClassB *b;
public:
    ClassA()
    {
        b = new ClassB();
    }
}