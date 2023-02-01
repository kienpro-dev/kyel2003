#include <iostream>
#include <string>

using namespace std;

struct Scores
{
    float score_1;
    float score_2;
    float finalScore;
    void input()
    {
        cin >> score_1 >> score_2;
        finalScore = (2 * score_2 + score_1) / 3;
        cin.ignore();
    }
};

struct Student
{
    string name;
    int dateOfBirth;
    Scores score;
};

void input(int &n)
{
    do
    {
        cin >> n;
        if (n < 1)
            cout << "Khong thoa man, nhap lai";
    } while (n < 1);
    cin.ignore();
}

void inputStudent(Student &s)
{
    cout << "Nhap ten: ";
    getline(cin, s.name);
    cout << "Nhap nam sinh: ";
    cin >> s.dateOfBirth;
    cout << "Nhap diem tb ki 1 va ki 2: ";
    s.score.input();
}

void outputStudent(Student s)
{
    cout << setw(15) << left << s.name << setw(10) << left << s.dateOfBirth;
    cout << setw(5) << left << s.score.score_1 << setw(5) << left << s.score.score_2;
    cout << setw(5) << right << s.score.finalScore << endl;
}

void inputListOfStudents(Student s, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Sinh vien thu " << i + 1;
        inputStudent(s[i]);
    }
}

void sortByScore(Student s, int n)
{
    for(int i = 0; i < n-1; i++)
        for(int j = i+1; j < n; j++)
            if(s[i].score.finalScore < s[j].score.finalScore)
                swap(s[j], s[i]);
}

void table()
{
    cout << setW(5) << left << "STT" << setw(15) << left << "Ho ten" << setw(10) << left << "Nam sinh";
    cout << setw(5) << left << "Ki 1" << setw(5) << left << "Ki 2";
    cout << setw(7) << right << "Ca nam" << endl;
}

void outputListOfStudentsGood(Student s[], int n)
{
    table();
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i].score.finalScore >= 5)
        {
            cout << setw(5) << left << j + 1;
            outputStudent(s[i]);
            j++;
        }
    }
}

void outputListOfStudentsBad(Student s[], int n)
{
    table();
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i].score.finalScore < 4 || s[i].score.score_1 < 2 || s[i].score.score_2 < 2)
        {
            cout << setw(5) << left << j + 1;
            outputStudent(s[i]);
            j++;
        }
    }
}

void studentsGrading(Student s[], int n)
{
    int cnt_1 = 0, cnt_2 = 0, cnt_3=0,cnt_4=0;
    for(int i = 0; i < n; i++)
    {
        if(s[i].score.finalScore>=8.0 && s[i].score.score_1>=6 && s[i].score.score_2>=6)
            cnt_1++;
        else if ( s[i].score.finalScore>=6.5 && s[i].score.score_1>=5 && s[i].score.score_2>=5)
            cnt_2++;
        else if(s[i].score.finalScore>=5 && s[i].score.score_1>=3 && s[i].score.score_2>=3)
            cnt_3++;
        else if (s[i].score.finalScore>=3.5 && s[i].score.score_1>=2 && s[i].score.score_2>=2)
            cnt_4++;
    }
    
}

int main()
{

    return 0;
}