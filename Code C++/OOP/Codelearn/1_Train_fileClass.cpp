class Square
{
private:
    float x;

public:
    Square(float x)
    {
        this->x = x;
    }

    float getArea()
    {
        return x * x;
    }

    float getPerimeter()
    {
        return x * 4;
    }
};