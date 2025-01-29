#include <iostream>
using namespace std;
string name;
float calculateaverage(float english, float math, float socialstudies, float chemistry, float biology);
string grade(float cal, float n);

int main()
{
    string name;
    float english, math, socialstudies, chemistry, biology;
    cout << "entre the name of the student: ";
    cin >> name;
    cout << "entre the marks of english: ";
    cin >> english;
    cout << "entre the marks of math: ";
    cin >> math;
    cout << "entre the marks of socialstudies: ";
    cin >> socialstudies;
    cout << "entre the marks of chemistry: ";
    cin >> chemistry;
    cout << "entre the marks of biology: ";
    cin >> biology;
    cout << "NAME: " << name << endl;
    calculateaverage(english, math, socialstudies, chemistry, biology);

    return 0;
}
float calculateaverage(float english, float math, float socialstudies, float chemistry, float biology)
{
    float cal, n;
    cal = (english + math + socialstudies + chemistry + biology) / 500;
    n = cal * 100;
    cout << "Persentage: " << n << "%" << endl;
    grade(cal, n);
}
string grade(float cal, float n)
{

    if (n >= 90)
    {
        cout << "Grade: A+";
    }
    if (n >= 80 && n < 90)
    {
        cout << "Grade: A-";
    }
    if (n >= 70 && n < 80)
    {
        cout << "Grade: B";
    }
    if (n >= 60 && n < 70)
    {
        cout << "Grade: B-";
    }
    if (n >= 50 && n < 60)
    {
        cout << "Grade: C";
    }
    if (n >= 40 && n < 50)
    {
        cout << "Grade: D";
    }
    if (n < 40)
    {
        cout << "Grade: F";
    }
}
