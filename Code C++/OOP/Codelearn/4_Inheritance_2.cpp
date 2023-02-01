// Phạm vi truy cập của lớp con
// C++ cho phép thay đổi phạm vi truy cập của thuộc tính hoặc phương thức

// - public: public->public
//           protected->protected
//           private(k truy cap)
// - protected: public, protected -> protected
//              private(k truy cap)
// - private: public, protected -> private
class A
{
public:
    int a;
protected:
    int b;
private:
    int c;
};

class B : public A  
{
    // a:public
    // b:protected
    // c:k dc truy cap tu B
};

class C : protected A  
{
    // a:protected
    // b:protected
    // c:k dc truy cap tu C
};

class D : private A  
{
    // a:private
    // b:private
    // c:k dc truy cap tu B
};