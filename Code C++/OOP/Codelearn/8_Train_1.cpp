#include <iostream>
#include <vector>

using namespace std;

class Transport
{
private:
    string manufacturer;
    string name;
    int year;
    int speed;

public:
    Transport()
    {
    }
    Transport(string manufacturer, string name, int year, int speed) : manufacturer(manufacturer), name(name), year(year), speed(speed)
    {
    }
    string getManufacturer()
    {
        return manufacturer;
    }
    string getName()
    {
        return name;
    }
    int getYear()
    {
        return year;
    }
    int getSpeed()
    {
        return speed;
    }
    void display()
    {
        cout << "Manufacturer: " << manufacturer << endl;
        cout << "Name: " << name << endl;
        cout << "Year Of Manufacturer: " << year << endl;
        cout << "Speed: " << speed << endl;
    }
};

class Car : public Transport
{
private:
    int numberSeat;
    string engineType;

public:
    Car()
    {
    }
    Car(string manufacturer, string name, int year, int speed, int numberSeat, string engineType) : Transport(manufacturer, name, year, speed)
    {
        this->numberSeat = numberSeat;
        this->engineType = engineType;
    }
    int getNumberSeat()
    {
        return numberSeat;
    }
    string getEngineType()
    {
        return engineType;
    }
    double getSpeedBasic()
    {
        return Transport::getSpeed() / getNumberSeat();
    }
    void display()
    {
        Transport::display();
        cout << "Number Seat: " << getNumberSeat() << endl;
        cout << "Engine Type: " << getEngineType() << endl;
        cout << "Speed Basic: " << getSpeedBasic() << endl;
    }
    static vector<Car> getCarHaveMaxSpeedBasic(vector<Car> vt)
    {
        vector<Car> result;
        double maxSpeedBasic = vt[0].getSpeedBasic();
        for (int i = 1; i < vt.size(); i++)
            if (vt[i].getSpeedBasic() > maxSpeedBasic)
                maxSpeedBasic = vt[i].getSpeedBasic();
        for (int i = 0; i < vt.size(); i++)
            if (vt[i].getSpeedBasic() == maxSpeedBasic)
                result.push_back(vt[i]);
        return result;
    }

    static vector<Car> getCarHaveMaxSeat(vector<Car> vt)
    {
        vector<Car> result;
        double maxSeat = vt[0].getNumberSeat();
        for (int i = 1; i < vt.size(); i++)
            if (vt[i].getNumberSeat() > maxSeat)
                maxSeat = vt[i].getNumberSeat();
        for (int i = 0; i < vt.size(); i++)
            if (vt[i].getNumberSeat() == maxSeat)
                result.push_back(vt[i]);
        return result;
    }
};