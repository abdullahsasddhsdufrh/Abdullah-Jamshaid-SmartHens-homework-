#include <iostream>
using namespace std;
void decideactivity(string temp, string hum);

int main()
{
    string temp, hum;
    cout << "entre temp warm or cold:";
    cin >> temp;
    cout << "entre humidity dry or humid:";
    cin >> hum;
    decideactivity(temp, hum);
    return 0;
}
void decideactivity(string temp, string hum)
{
    {
        if (temp != "warm" && temp != "cold")
        {
            cout << "oqaat mai rah ker sahe data provide keroa shukeriya!!";

            if (temp == "warm")
            {
                if (hum == "dry")
                {
                    cout << "play tennis";
                }
                if (hum == "humid")
                {
                    cout << "try to swim";
                }
            }
        }
    }

    if (temp == "cold")
    {
        if (hum == "dry")
        {
            cout << "play baskitball";
        }
        if (hum == "humid")
        {
            cout << "go and chill by watching tv";
        }
    }
}