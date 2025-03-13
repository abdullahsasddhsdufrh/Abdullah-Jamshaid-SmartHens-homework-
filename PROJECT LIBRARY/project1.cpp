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

string user_name[100], passwords[100];
int totalUsers = 0;

void Menu();
void signUp(string user, string password);
bool signIn(string user, string password);
bool isUserPresent(string user);
void isuseradmin();
void total_names_of_user();


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
            if(isUserPresent(user))
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
            
            choice = 3;  // Exit after sign in
            break;
        case 3:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
        }
        // getch();
        // system("cls");
    } while(choice != 3);

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
    if (user=="admin"&&password=="1234")
    {
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

void Menu() {
    cout << "\n===================================\n";
    cout << "       LIBRARY - USER SYSTEM         \n";
    cout << "===================================\n";
    cout << "  1. Sign Up                       \n";
    cout << "  2. Sign In                       \n";
    cout << "  3. Exit                          \n";
    cout << "===================================\n";
    cout << " Enter your choice: ";
}


void isuseradmin(){

int choice;
cout<<"\n1.Checking number of users.\n";
 cout << "2.Deleting the user\n";
 cout << "3.Total numbers of Books\n";
 cout << "4.Name of People borrowed the books. \n";
 cout << "5.Stock and the book a person ordered and is not present. \n";
  cout << "\nEnter the choice: ";

cin>>choice;

switch (choice)
{
case 1:
    total_names_of_user();
    break;

default:
    break;
}



}


void total_names_of_user(){
cout<<"TOTAL USERS ARE: "<<totalUsers<<"\n";
for (int i = 0; i < totalUsers; i++)
    {
cout<<"\nUser Name is || "<<user_name[i]<<" and The Password is || "<<passwords[i];


    }



}