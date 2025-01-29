#include <iostream>
#include <string>
using namespace std;
string zodiacchecker(int day, string month);
int main()
{
    int day;
    string month;
    cout << "Enter the date of birth : ";
    cin >> day;
    cout << "Enter the month(e.g.,January, February) : ";
    cin >> month;
    cout << "Zodiac sign : " << zodiacchecker(day, month);

    return 0;
}
string zodiacchecker(int day, string month)
{
    if ((month == "March" && day >= 21) || (month == "April" && day <= 19))
        return "Aries";

    if ((month == "April" || month == "april" && day >= 20) || (month == "May" || month == "may" && day <= 20))
        return "Tauras";
    if ((month == "May" || month == "may" && day >= 21) || (month == "June" || month == "june" && day <= 20))
        return "Gemini";
    if ((month == "june" || month == "June" && day >= 21) || (month == "July" || month == "july" && day <= 22))
        return "Cancer";
    if ((month == "July" || month == "July" && day >= 23) || (month == "August" || month == "august" && day <= 22))
        return "Leo";
    if ((month == "August" || month == "august" && day >= 23) || (month == "September" || month == "september" && day <= 22))
        return "Virgo";
    if ((month == "September" || month == "september" && day >= 23) || (month == "October" || month == "october" && day <= 22))
        return "Libra";
    if ((month == "October" || month == "october" && day >= 23) || (month == "November" || month == "november" && day <= 21))
        return "Scorpio";
    if ((month == "November" || month == "november" && day >= 22) || (month == "December" || month == "december" && day <= 21))
        return "Sagittarius";
    if ((month == "December" || month == "december" && day >= 22) || (month == "January" || month == "january" && day <= 19))
        return "Capricorn";
    if ((month == "January" || month == "january" && day >= 20) || (month == "Februay" || month == "februay" && day <= 18))
        return "Aquarius";
    if ((month == "Februay" || month == "februay" && day >= 19) || (month == "March" || month == "march" && day <= 20))
        return "Pisces";
    else
        return "invalid Input!!";
}