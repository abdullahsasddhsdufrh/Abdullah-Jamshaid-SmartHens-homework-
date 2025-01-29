#include <iostream>
using namespace std;

string calculationofHotalPrice(string month, float day);

int main()
{
    string month;
    float day;
    cout << "Enter the name of month (may,june,july,august,september,october): ";
    cin >> month;
    cout << "enter the number of stays: ";
    cin >> day;
    calculationofHotalPrice(month, day);
    return 0;
}
string calculationofHotalPrice(string month, float day)
{
    float a, s;

    if (month == "may" || month == "october")
    {
        if (day > 7&&day<14)
        {
            s = 50 * day - 50 * day * 0.05;
            cout << "STUDIO: $" << s << endl;
        }
        if (day < 7)
        {
            s = 50 * day;
            cout << "STUDIO: $" << s << endl;
        }
        if (day>14)
        {
             s = 50 * day - 50 * day * 0.3;
            cout << "STUDIO: $" << s << endl;
        }
        

        if (day > 14)
        {
            a = 65 * day - 65 * day * 0.1;
            cout << "Apartment: $" << a << endl;
        }
        if (day < 14)
        {
            a = 65 * day;
            cout << "Apartment: $" << a << endl;
        }
    }
    if (month == "june" || month == "september")
    {

        if (day > 14)
        {
            s = 75.2 * day - 75.2 * day * 0.3;
            cout << "STUDIO: $" << s << endl;
        }
        if (day <= 14)
        {
            s = 75.2 * day;
            cout << "STUDIO: $" << s << endl;
        }
        if (day > 14)
        {
            a = 68.7 * day - 68.7 * day * 0.1;
            cout << "Apartment: $" << a << endl;
        }
        if (day <= 14)
        {
            a = 68.7 * day;
            cout << "Apartment: $" << a << endl;
        }
    }
    if (month == "july" || month == "august")
    {

        if (day >0)
        {
            s = 76 * day ;
            cout << "STUDIO: $" << s << endl;
        }
        
        if (day > 14)
        {
            a = 77 * day - 77 * day * 0.1;
            cout << "Apartment: $" << a << endl;
        }
        if (day < 14)
        {
            a = 77 * day;
            cout << "Apartment: $" << a << endl;
        }
    }
}