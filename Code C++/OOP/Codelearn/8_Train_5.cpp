#include <iostream>
#include <vector>

using namespace std;

class Food
{
private:
    string name;
    double price;

public:
    Food()
    {
    }
    Food(string name, double price) : name(name), price(price)
    {
    }
    void setName(string name)
    {
        this->name = name;
    }
    void setPrice(double price)
    {
        this->price = price;
    }
    string getName()
    {
        return name;
    }
    double getPrice()
    {
        return price;
    }
};

class CannedFood : public Food
{
private:
    int numberBox;

public:
    CannedFood()
    {
    }
    CannedFood(string name, double price, int numberBox) : Food(name, price), numberBox(numberBox)
    {
    }
    void setNumberBox(int numberBox)
    {
        this->numberBox = numberBox;
    }
    int getNumberBox()
    {
        return numberBox;
    }
    void display()
    {
        cout << "Name: " << Food::getName() << endl;
        cout << "Price: " << Food::getPrice() << endl;
        cout << "Number box: " << numberBox << endl;
    }
    static void sortNumberBox(vector<CannedFood> &vt)
    {
        for (int i = 0; i < vt.size() - 1; i++)
            for (int j = i + 1; j < vt.size(); j++)
                if (vt[i].getNumberBox() > vt[j].getNumberBox())
                    swap(vt[i], vt[j]);
    }
};

class NonCFood : public Food
{
private:
    int weight;

public:
    NonCFood()
    {
    }
    NonCFood(string name, double price, int weight) : Food(name, price), weight(weight)
    {
    }
    void setWeight(int weight)
    {
        this->weight = weight;
    }
    int getWeight()
    {
        return weight;
    }
    void display()
    {
        cout << "Name: " << Food::getName() << endl;
        cout << "Price: " << Food::getPrice() << endl;
        cout << "Weight: " << weight << endl;
    }
    static void sortWeight(vector<NonCFood> &vt)
    {
        for (int i = 0; i < vt.size() - 1; i++)
            for (int j = i + 1; j < vt.size(); j++)
                if (vt[i].getWeight() > vt[j].getWeight())
                    swap(vt[i], vt[j]);
    }
};

int main()
{
    vector<CannedFood> cf;
    cf.push_back(CannedFood("Ca thu", 45000, 10));
    cf.push_back(CannedFood("Tom", 20000, 25));
    cf.push_back(CannedFood("Ca hoi", 80000, 5));
    CannedFood::sortNumberBox(cf);
    for (int i = 0; i < cf.size(); i++)
        cf[i].display();

    // NonCFood ....
    return 0;
}