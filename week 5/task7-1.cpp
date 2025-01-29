#include <iostream>
using namespace std;

void calculationoftime(float emin, float ehour, float shour, float smin)
{
    int examcal = ehour * 60 + emin;
    int studentcal = shour * 60 + smin;

    int time = examcal - studentcal;

    if (time == 0)
    {
        cout << "you are on time" << endl;
    }
    if (time > 0)
    {
        if (time > 60)
        {
            int hour = time / 60;
            int min = time % 60;
            cout << "Early" << endl;
            cout << hour << ":" << min;
        }
        if (time <= 60)
        {
            cout << "Early" << endl;
            cout << time << " MIN YOU ARE EARLY..";
        }
    }
    if (time < 0)
    {
        time = -time;
        if (time > 60)
        {
            int hour = time / 60;
            int min = time % 60;
            cout << "LATE" << endl;
            cout << hour << ":" << min;
        }
        if (time <= 60)
        {
            cout << "LATE" << endl;
            cout << time << " MIN YOU ARE LATE..";
        }
    }
}

int main()
{
    float emin, ehour, shour, smin;

    cout << "Enter exam starting time(hour): ";
    cin >> ehour;
    cout << "Enter exam starting time(minutes): ";
    cin >> emin;
    cout << "Enter student arriving time(hour): ";
    cin >> shour;
    cout << "Enter student arriving time(minutes): ";
    cin >> smin;

    calculationoftime(emin, ehour, shour, smin);

    return 0;
}
