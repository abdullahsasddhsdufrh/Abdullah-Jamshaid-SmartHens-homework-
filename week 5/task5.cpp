#include <iostream>
using namespace std;

float calculateFruitPrice(string fruit, string week, float quantity);

int main()
{
    string fruit, week;
    float quantity;

    cout << "Enter the name of fruit: ";
    cin >> fruit;
    if (fruit != "banana" && fruit != "apple" && fruit != "orange" && fruit != "grapefruit" && fruit != "kiwi" && fruit != "pineapple" && fruit != "grapes")
    {
        cout << "sahe phal daloo error aa raha hai bhi...";
        return 0;
    }

    cout << "enter the day of the week(e.g monday,tuesday ..): ";
    cin >> week;
    if (week != "monday" && week != "tuesday" && week != "wednesday" && week != "thursday" && week != "friday" && week != "saturday" && week != "sunday")
    {
        cout << "sahe day  daloo error aa raha hai bhi...";
        return 0;
    }

    cout << "enter the quantity: ";
    cin >> quantity;

    calculateFruitPrice(fruit, week, quantity);

    return 0;
}

float calculateFruitPrice(string fruit, string week, float quantity)
{
    float n;

    {
        if (week == "sunday" || week == "saturday")
        {
            if (fruit == "banana")
            {
                n = quantity * 2.7;
                cout << "the total will be: " << n;
            }
            if (fruit == "apple ")
            {
                n = quantity * 1.25;
                cout << "the total will be: " << n;
            }
            if (fruit == "orange")
            {
                n = quantity * 0.9;
                cout << "the total will be: " << n;
            }
            if (fruit == "grapefruit")
            {
                n = quantity * 1.6;
                cout << "the total will be: " << n;
            }
            if (fruit == "kiwi")
            {
                n = quantity * 3;
                cout << "the total will be: " << n;
            }
            if (fruit == "pineapple")
            {
                n = quantity * 5.6;
                cout << "the total will be: " << n;
            }
            if (fruit == "grapes")
            {
                n = quantity * 4.2;
                cout << "the total will be: " << n;
            }
            return 0;
        }
    }
    if (fruit == "banana")
    {
        n = quantity * 2.5;
        cout << "the total will be: " << n;
    }
    if (fruit == "apple")
    {
        n = quantity * 1.2;
        cout << "the total will be: " << n;
    }
    if (fruit == "orange")
    {
        n = quantity * 0.85;
        cout << "the total will be: " << n;
    }
    if (fruit == "grapefruit")
    {
        n = quantity * 1.45;
        cout << "the total will be: " << n;
    }
    if (fruit == "kiwi")
    {
        n = quantity * 2.7;
        cout << "the total will be: " << n;
    }
    if (fruit == "pineapple")
    {
        n = quantity * 5.5;
        cout << "the total will be: " << n;
    }
    if (fruit == "grapes")
    {
        n = quantity * 3.8;
        cout << "the total will be: " << n;
    }
    return 0;
}