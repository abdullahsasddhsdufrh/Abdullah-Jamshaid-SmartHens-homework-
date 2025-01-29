#include <iostream>
using namespace std;
void telphon_service(char service, char time, float min);

int main()
{
    char service, time;
    float min;
    cout << "Entre the service code(R for regular and P for premium): ";
    cin >> service;
    if (service != 'P' && service != 'R')
    {
        cout << "error sahe data daal tari maharbani hai";
        return 0;
    }

    cout << "Entre the time (D for day and N for night): ";
    cin >> time;
    cout << "Entre the numer of minutes: ";
    cin >> min;
    if (service == 'P')
    {
        cout << "SERVICE TYPE: PREMIUM" << endl;
    }
    if (service == 'R')
    {
        cout << "SERVICE TYPE: REGULAR" << endl;
    }

    cout << "TOTAL MINUTES: " << min << endl;

    telphon_service(service, time, min);
    return 0;
}
void telphon_service(char service, char time, float min)
{
    float n;

    if (service == 'R')
    {
        if (min <= 50)
        {
            cout << "AMOUNT DUE: 10$";
        }
        if (min > 50)
        {
            n = 10 + (min - 50) * 0.2;
            cout << "AMOUNT DUR: " << n << "$";
        }
    }
    if (service == 'P')

    {
        if (time == 'D')
        {
            if (min <= 75)
            {
                cout << "AMOUNT DUE: 25$";
            }
            if (min > 75)
            {
                n = 25 + (min - 75) * 0.1;

                cout << "AMOUNT DUE: " << n << "$";
            }
        }
        if (time == 'N')
        {
            if (min <= 100)
            {
                cout << "AMOUNT DUE: 25$";
            }
            if (min > 100)
            {
                n = 25 + (min - 100) * 0.05;

                cout << "AMOUNT DUE: " << n << "$";
            }
        }
    }
}
