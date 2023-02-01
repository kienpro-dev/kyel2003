#include <iostream>
#include <vector>

using namespace std;

class Score
{
protected:
    double math;
    double literature;
    double english;

public:
    Score()
    {
    }
    Score(double math, double literature, double english) : math(math), literature(literature), english(english)
    {
    }
    double getMath()
    {
        return math;
    }
    double getLiterature()
    {
        return literature;
    }
    double getEnglish()
    {
        return english;
    }
    virtual double pointA()
    {
        return 0;
    }
    virtual double pointB()
    {
        return 0;
    }
    virtual double pointC()
    {
        return 0;
    }
    virtual double pointD()
    {
        return math + literature + english;
    }
    virtual double avgPoint() = 0;
    virtual double pointClass() = 0;
    static double getMaxAvg(vector<Score *> vt)
    {
        double maxAvg = vt[0]->avgPoint();
        for (int i = 1; i < vt.size(); i++)
            if (vt[i]->avgPoint() > maxAvg)
                maxAvg = vt[i]->avgPoint();
        return maxAvg;
    }
    static double getMinAvg(vector<Score *> vt)
    {
        double minAvg = vt[0]->avgPoint();
        for (int i = 1; i < vt.size(); i++)
            if (vt[i]->avgPoint() < minAvg)
                minAvg = vt[i]->avgPoint();
        return minAvg;
    }
    bool isPass()
    {
        return avgPoint() > 5;
    }
    static double getMaxPointA(vector<Score *> vt)
    {
        double maxPointA = vt[0]->pointA();
        for (int i = 1; i < vt.size(); i++)
            if (vt[i]->pointA() > maxPointA)
                maxPointA = vt[i]->pointA();
        return maxPointA;
    }
    static double getMaxPointB(vector<Score *> vt)
    {
        double maxPointB = vt[0]->pointB();
        for (int i = 1; i < vt.size(); i++)
            if (vt[i]->pointB() > maxPointB)
                maxPointB = vt[i]->pointB();
        return maxPointB;
    }
    static double getMaxPointC(vector<Score *> vt)
    {
        double maxPointC = vt[0]->pointC();
        for (int i = 1; i < vt.size(); i++)
            if (vt[i]->pointC() > maxPointC)
                maxPointC = vt[i]->pointC();
        return maxPointC;
    }
    static double getMaxPointD(vector<Score *> vt)
    {
        double maxPointD = vt[0]->pointD();
        for (int i = 1; i < vt.size(); i++)
            if (vt[i]->pointD() > maxPointD)
                maxPointD = vt[i]->pointD();
        return maxPointD;
    }
};

class ScoreNatural : public Score
{
private:
    double physic;
    double chemistry;
    double biology;

public:
    ScoreNatural()
    {
    }
    ScoreNatural(double math, double literature, double english, double physic, double chemistry, double biology) : Score(math, literature, english), physic(physic), chemistry(chemistry), biology(biology)
    {
    }
    double getPhysic()
    {
        return physic;
    }
    double getChemistry()
    {
        return chemistry;
    }
    double getBiology()
    {
        return biology;
    }
    double pointA()
    {
        return math + physic + chemistry;
    }
    double pointB()
    {
        return math + biology + chemistry;
    }
    double pointClass()
    {
        return physic + chemistry + biology;
    }
    double avgPoint()
    {
        return (pointClass() + math + literature + english) / 6;
    }
};

class ScoreSocial : public Score
{
private:
    double ce;
    double geography;
    double history;

public:
    ScoreSocial()
    {
    }
    ScoreSocial(double math, double literature, double english, double ce, double geography, double history) : Score(math, literature, english), ce(ce), geography(geography), history(history)
    {
    }
    double getCe()
    {
        return ce;
    }
    double getGeography()
    {
        return geography;
    }
    double getHistory()
    {
        return history;
    }
    double pointC()
    {
        return literature + history + geography;
    }
    double pointClass()
    {
        return ce + geography + history;
    }
    double avgPoint()
    {
        return (pointClass() + math + literature + english) / 6;
    }
};

int main()
{
    Score **s = new Score *[6];
    s[0] = new ScoreSocial(4, 2, 4, 5, 2, 6);
    s[1] = new ScoreNatural(6, 6, 3, 6, 4, 7);
    s[2] = new ScoreSocial(9, 7, 7, 8, 8, 5);
    s[3] = new ScoreNatural(10, 4, 8, 5, 6, 9);
    s[4] = new ScoreSocial(8, 8, 7, 2, 6, 6);
    s[5] = new ScoreNatural(2, 3, 2, 1, 6, 5);
    for (int i = 0; i < 6; i++)
    {
        cout << "Student " << i + 1 << endl;
        cout << "Point A: " << s[i]->pointA() << endl;
        cout << "Point B: " << s[i]->pointB() << endl;
        cout << "Point C: " << s[i]->pointC() << endl;
        cout << "Point D: " << s[i]->pointD() << endl;
        cout << "___________________________" << endl;
        cout << "Point by class: " << s[i]->pointClass() << endl;
        cout << "Average point: " << s[i]->avgPoint() << endl;
        if (s[i]->isPass())
            cout << "Pass" << endl;
        else
            cout << "Fail" << endl;
        cout << "___________________________" << endl;
    }

    vector<Score *> vt;
    for (int i = 0; i < 6; i++)
        vt.push_back(s[i]);
    cout << "Max average point: " << Score::getMaxAvg(vt) << endl;
    cout << "Max point A: " << Score::getMaxPointA(vt) << endl;
    cout << "Max point B: " << Score::getMaxPointB(vt) << endl;
    cout << "Max point C: " << Score::getMaxPointC(vt) << endl;
    cout << "Max point D: " << Score::getMaxPointD(vt) << endl;
    return 0;
}