#include <iostream>
#include <conio.h>
using namespace std;

/*
1. menu
2. user registration (sign up)
3. user login (sign in)
4. Exit
5. input validation
*/

string user_name[100] = {"hello", "hanzala", "ABDULLAH AMEEN", "abdullah jamsahid", "Abdul Hadi"};
string passwords[100] = {"123", "1234", "1232", "12323", "21412"};

int totalUsers = 5;

void Menu();
void signUp(string user, string password);
bool signIn(string user, string password);
bool isUserPresent(string user);
void isuseradmin();
void total_names_of_user();
void del_user();

int main()
{
    cout << "Welcome to the Sign In/Sign Up page!" << endl;

    int choice;
    do
    {
        Menu();
        cin >> choice;

        string user, password;
        switch (choice)
        {
        case 1:
            // Sign Up
            cout << "Sign Up" << endl;
            cout << "Enter your user: ";
            cin >> user;
            cout << "Enter your password: ";
            cin >> password;
            if (isUserPresent(user))
            {
                cout << "User already exists" << endl;
                break;
            }
            else
            {
                signUp(user, password);
            }
            break;
        case 2:
            // Sign In
            cout << "Sign In" << endl;
            cout << "Enter your User Name : ";
            cin >> user;
            cout << "Enter your password: ";
            cin >> password;

            signIn(user, password);

            choice = 3; // Exit after sign in
            break;
        case 3:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
        }
        // getch();
        system("cls");
    } while (choice != 3);

    return 0;
}

void signUp(string user, string password)
{
    user_name[totalUsers] = user;
    passwords[totalUsers] = password;
    totalUsers++;
}

bool signIn(string user, string password)
{

    if (user == "admin" && password == "1234")
    {

        system("cls");
        isuseradmin();

        return true;
    }

    for (int i = 0; i < totalUsers; i++)
    {
        if (user_name[i] == user)
        {
            if (passwords[i] == password)
            {
                cout << "Welcome " << user_name[i] << endl;

                return true;
            }
        }
    }
    cout << "Invalid user or password" << endl;
    getch();
    system("cls");
    return false;
}

bool isUserPresent(string user)
{
    for (int i = 0; i < totalUsers; i++)
    {
        if (user_name[i] == user)
        {
            return true;
        }
    }

    return false;
}

void Menu()
{
    cout << "\n===================================================\n";

    cout << "\n            LIBRARY - USER SYSTEM         \n";
    cout << "\n===================================================\n";

    cout << "  1. Sign Up                       \n";
    cout << "  2. Sign In                       \n";
    cout << "  3. Exit                          \n";
    cout << "\n===================================================\n";

    cout << " Enter your choice: ";
}

void isuseradmin()
{

    int choice;
agaimadmin:
    cout << "\n===================================================\n";

    cout << "             WELCOME DEAR ADMIN \n";
    cout << "\n===================================================\n";

    cout << "\n1.Checking number of users.\n";
    cout << "2.Deleting the user\n";
    cout << "3.Total numbers of Books\n";
    cout << "4.Name of People borrowed the books. \n";
    cout << "5.Stock and the book a person ordered and is not present. \n";
    cout << "\nEnter the choice: ";

    cin >> choice;

    switch (choice)
    {
    case 1:
        total_names_of_user();
        break;
    case 2:
        del_user();
        break;

    default:
        Menu();
    }
    getch();
    system("cls");
    goto agaimadmin;
}

void total_names_of_user()
{
    cout << "TOTAL USERS ARE: " << totalUsers << "\n";
    for (int i = 0; i < totalUsers; i++)
    {
        cout << "\n"
             << i << " User Name is || " << user_name[i] << " and The Password is || " << passwords[i];
    }
    cout << "\n=======================================================\n";
}

void del_user()
{
    int indexnumber;
    for (int i = 0; i < totalUsers; i++)
    {
        cout << "\n"
             << i << " User Name is || " << user_name[i] << " and The Password is || " << passwords[i];
    }

    cout << "\nEnter the index number: ";
    cin >> indexnumber;
    for (int i = indexnumber; i < totalUsers; i++)
    {
        user_name[i] = user_name[i + 1];
        passwords[i] = passwords[i + 1];
    }
    cout << "\n===================================================\n";

    cout << "             AFTER DELETING THE USER: ";
    cout << "\n===================================================\n";

    for (int i = 0; i < totalUsers - 1; i++)
    {
        cout << "\n"
             << i << " User Name is || " << user_name[i] << " and The Password is || " << passwords[i];
    }
    totalUsers--;
    cout << "\n UPDATED NUMBER OF USERS: " << totalUsers;
    cout << "\n===================================================\n";
}