#include <iostream>
#include <conio.h>
#include <string>
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
int borrowedbyusers[100] = {1, 2, 2, 12, 2};
string nameofbooksborrowedbyuser[100][12];
int borrowedBookCount[100] = {0};
struct Wish
{
    string username;
    string bookName;
};

Wish wishlist[100] = {{user_name[0], "The Alchemist"}, {user_name[1], "1984"}};
int wishnumbeer = 2;

// Parallel initialization of book data
int Id[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
string Name[100] = {"Peer-e-Kamil", "Mushaf", "Jannat Kay Pattay", "Zaviya", "Udaas Naslain", "Raja Gidh", "Shahab Nama", "Dastak Naa Do", "Mirza Ghalib", "Aangan", "How to train your dragon", "ABD"};
string Author[100] = {"Umera Ahmed", "Nimra Ahmed", "Nimra Ahmed", "Ashfaq Ahmed", "Abdullah Hussain", "Bano Qudsia", "Qudrat Ullah Shahab", "Mustansar Hussain Tarar", "Mirza Asadullah Khan Ghalib", "Khadija Mastoor", "Abdullah", "ABD"};
int Quantity[100] = {5, 7, 10, 6, 5, 8, 6, 9, 7, 4, 3, 1};

int totalUsers = 5;
int totalnumberofbooks = 12;
int iddbookofborrow = -1;
int numberofbookborrowed = 0;
string nameofbook;

void Menu();
void signUp(string user, string password);
bool signIn(string user, string password);
bool isUserPresent(string user);
void isuseradmin();
void total_names_of_user();
void del_user();
void Booksmanagement();
void NumberofBooks();
void additionofBook();
void delofbooks();
void borrowbookslist();
void usersfunction(int userIndex);
void serchthebook(int userIndex);
void serching(int userIndex);
void borrowthebookbyuser(int userIndex);
void listofbooksborrowed(int userIndex);
void wishbook(int userIndex);
void viewWishes();

int main()

{
    system("cls");
    
m:
    char confirmation;
    int var=1;

    string choice;

    do
    {
        Menu();
        cin >> choice;

        string user, password;
        if (choice == "1")
        {
            // Sign Up
            system("cls");

            cout << "\n===================================================\n";

            cout << "       SIGN UP PAGE";
            cout << "\n===================================================\n";

            cout << "ENTER YOUR USER: ";
            cin >> user;
            cout << "ENTER YOUR PASSWORD: ";
            cin >> password;

            cout << "ARE YOU SURE YOU WANT TO SIGH IN(Y/N): ";
            cin >> confirmation;

            if (confirmation == 'y' || confirmation == 'Y')
            {

                if (isUserPresent(user))
                {
                    cout << "USER ALREADY EXISTS" << endl;
                    break;
                }
                else
                {
                    signUp(user, password);
                }
            }
            else
            {
                goto m;
            }
        }
        else if (choice == "2")
        {
            // Sign In
            system("cls");
            cout << "\n===================================================\n";

            cout << "                   SIGN IN PAGE";
            cout << "\n===================================================\n";

            cout << "ENTER YOUR USER NAME: ";
            cin >> user;
            cout << "ENTER YOUR PASSWORD: ";
            cin >> password;
            cout << "ARE YOU SURE YOU WANT TO SIGH IN(Y/N): ";
            cin >> confirmation;

            if (confirmation == 'y' || confirmation == 'Y')
            {
                if (signIn(user, password))
                {
                    choice = 3; // Exit after sign in
                }
            }
            else
            {
                goto m;
            }
        }
        else if (choice=="3")
        {
            system("cls");

            cout << "\n===================================================\n";

            cout << "         THANKS FOR COMMING'\nEXITING...";
            cout << "\n===================================================\n";

            return 0;
        }
        else{
            cout << "INVALID CHOICE" << endl;
            int var=0;
            getch();

            goto m;
        }
        

     
    } while (var==0);

    getch();
    system("cls");

    return 0;
}

void signUp(string user, string password)
{
    user_name[totalUsers] = user;
    passwords[totalUsers] = password;
    totalUsers++;
    cout << "USER REGISTERED SUCCESSFULLY!" << endl;
    getch();
    system("cls");
    main();
}

bool signIn(string user, string password)
{

    if (user == "admin" && password == "123")
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
                usersfunction(i); // Pass the user index
                return true;
            }
        }
    }
    cout << "INVALID USER OR PASSWORD" << endl;
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
    system("cls");
    cout << "\n===================================================\n";

    cout << "        WELCOME TO THE SIGN IN/SIGN UP PAGE!";
    cout << "\n===================================================\n";


 
       

    cout << "\n-----------------------------------------------------\n";
    cout << "           LIBRARY - USER SYSTEM         ";
    cout << "\n-----------------------------------------------------\n";
   
    cout << "  1. SIGN UP                       \n";
    cout << "  2. SIGN IN                       \n";
    cout << "  3. EXIT                          \n";
    cout << "\n===================================================\n";
    cout << " ENTER YOUR CHOICE: ";
}

void isuseradmin()
{
    int choice;
    system("cls");

    cout << "\n===================================================\n";
    cout << "             WELCOME DEAR ADMIN \n";
    cout << "\n===================================================\n";
    cout << "\n1. CHECKING NUMBER OF USERS.\n";
    cout << "2. DELETING THE USER\n";
    cout << "3. BOOK MANAGEMENT SYSTEM \n";
    cout << "4. NAME OF PEOPLE BORROWED THE BOOKS. \n";
    cout << "5. VIEW USER WISHES \n";
    cout << "6. EXIT \n";
    cout << "\nENTER THE CHOICE: ";

    cin >> choice;

    switch (choice)
    {
    case 1:
        total_names_of_user();
        break;
    case 2:
        del_user();
        break;
    case 3:
        Booksmanagement();
        break;
    case 4:
        borrowbookslist();
        break;
    case 5:
        viewWishes();
        break;
    case 6:
        main();
        break;
    default:
        cout << "INVALID CHOICE" << endl;
        getch();
        system("cls");
        isuseradmin();
    }
}

void total_names_of_user()

{
    system("cls");
    cout << "\n===================================================\n";

    cout << "TOTAL USERS ARE: " << totalUsers ;
    cout << "\n===================================================\n";

    for (int i = 0; i < totalUsers; i++)
    {
        cout << "\n"
             << i << " USER NAME IS || " << user_name[i] << " AND THE PASSWORD IS || " << passwords[i];
    }
    cout << "\n=======================================================\n";
    getch();
    system("cls");
    isuseradmin();
}

void del_user()
{
    system("cls");
    cout << "\n===================================================\n";


    int indexnumber;
    for (int i = 0; i < totalUsers; i++)
    {
        cout << "\n"
             << i << " USER NAME IS || " << user_name[i] << " AND THE PASSWORD IS || " << passwords[i];
    }
    cout << "\n\n===================================================\n";


    do
    {
        cout << "\nENTER THE INDEX NUMBER: ";
        cin >> indexnumber;
        if (indexnumber < 0 || indexnumber >= totalUsers)
        {
            cout << "PLEASE ENTER A CORRECT INDEX NUMBER.\n";
        }
    } while (indexnumber < 0 || indexnumber >= totalUsers);

    for (int i = indexnumber; i < totalUsers - 1; i++)
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
             << i << " USER NAME IS || " << user_name[i] << " AND THE PASSWORD IS || " << passwords[i];
    }
    totalUsers--;
    cout << "\n UPDATED NUMBER OF USERS: " << totalUsers;
    cout << "\n===================================================\n";
    getch();
    system("cls");
    isuseradmin();
}

void Booksmanagement()
{
    int choice;
    system("cls");
    cout << "\n===================================================\n";
    cout << "               ADMIN MENU           \n";
    cout << "\n===================================================\n";
    cout << "1. VIEW ALL BOOKS\n";
    cout << "2. ADD BOOKS\n";
    cout << "3. DELETE BOOKS\n";
    cout << "4. EXIT\n";
    cout << "ENTER YOUR CHOICE: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        NumberofBooks();
        break;
    case 2:
        additionofBook();
        break;
    case 3:
        delofbooks();
        break;
    case 4:
        isuseradmin();
        break;
    default:
        cout << "INVALID CHOICE" << endl;
        getch();
        system("cls");
        Booksmanagement();
        break;
    }
}

void NumberofBooks()
{
    system("cls");


    cout << "\n===================================================\n";
    cout << "               LIBRARY BOOKS LIST                  ";
    cout << "\n===================================================\n";
    for (int i = 0; i < totalnumberofbooks; i++)
    {
        cout << "ID: " << Id[i] << ", NAME: " << Name[i] << ", AUTHOR: " << Author[i] << ", QUANTITY: " << Quantity[i] << endl;
    }
    cout << "\n===================================================\n";
    getch();
    system("cls");
    Booksmanagement();
}

void additionofBook()
{
    system("cls");
    cout << "\n===================================================\n";
    cout<<"                 ADDITION OF BOOK";
    cout << "\n===================================================\n";

    cout << "ENTER BOOK NAME: ";
    cin >> Name[totalnumberofbooks];

    cout << "ENTER AUTHOR NAME: ";
    cin >> Author[totalnumberofbooks];

    cout << "ENTER QUANTITY: ";
    cin >> Quantity[totalnumberofbooks];
    cout << "\n===================================================\n";


    Id[totalnumberofbooks] = totalnumberofbooks + 1;

    cout << "\nBOOK ADDED SUCCESSFULLY WITH ID: " << Id[totalnumberofbooks] ;
    cout << "\n===================================================\n";


    totalnumberofbooks++;
    getch();
    system("cls");
    Booksmanagement();
}

void delofbooks()
{
    system("cls");

    int indexnumber;


    for (int i = 0; i < totalnumberofbooks; i++)
    {
        cout << "\n"
             << "BOOK ID: " << i + 1 << ", NAME: " << Name[i] << ", AUTHOR: " << Author[i] << ", QUANTITY: " << Quantity[i];
    }

    do
    {
        cout << "\nENTER ID NUMBER (1 TO " << totalnumberofbooks << "): ";
        cin >> indexnumber;
        if (indexnumber < 1 || indexnumber > totalnumberofbooks)
        {
            cout << "PLEASE ENTER A VALID ID NUMBER BETWEEN 1 AND " << totalnumberofbooks << ".\n";
        }
    } while (indexnumber < 1 || indexnumber > totalnumberofbooks);

    indexnumber--;

    for (int i = indexnumber; i < totalnumberofbooks - 1; i++)
    {
        Id[i] = Id[i + 1];
        Name[i] = Name[i + 1];
        Author[i] = Author[i + 1];
        Quantity[i] = Quantity[i + 1];
    }

    cout << "\n===================================================\n";
    cout << "             AFTER DELETING THE BOOK: ";
    cout << "\n===================================================\n";

    for (int i = 0; i < totalnumberofbooks - 1; i++)
    {
        cout << "\n"
             << "BOOK ID: " << i + 1 << ", NAME: " << Name[i] << ", AUTHOR: " << Author[i] << ", QUANTITY: " << Quantity[i];
    }

    totalnumberofbooks--;
    cout << "\n UPDATED NUMBER OF BOOKS: " << totalnumberofbooks;
    cout << "\n===================================================\n";
    getch();
    system("cls");
    Booksmanagement();
}

void borrowbookslist()
{
    system("cls");
    cout << "\n===================================================\n";
    cout << "LIST OF ALL USERS AND THEIR BORROWED BOOKS:\n";

    for (int i = 0; i < totalUsers; i++)
    {
        cout << "\nUSER: " << user_name[i] << "\n";
        if (borrowedBookCount[i] == 0)
        {
            cout << "NO BOOKS BORROWED YET.\n";
        }
        else
        {
            for (int j = 0; j < borrowedBookCount[i]; j++)
            {
                cout << j + 1 << " " << nameofbooksborrowedbyuser[i][j] << "\n";
            }
        }
    }

    cout << "\n===================================================\n";
    getch();
    system("cls");
    isuseradmin();
}

void usersfunction(int userIndex)
{
    int choice;
    system("cls");
    cout << "\n===================================================\n";
    cout << "              WELCOME DEAR " << user_name[userIndex] << " \n";
    cout << "\n===================================================\n";
    cout << "\n1. BOOK SEARCHING.\n";
    cout << "2. BORROWING THE BOOKS\n";
    cout << "3. THE BOOKS BORROWED BY " << user_name[userIndex] << " .\n";
    cout << "4. WISH LIST OR ANY BOOK " << user_name[userIndex] << " WANTED TO ADD. \n";
    cout << "5. EXIT \n";
    cout << "\nENTER THE CHOICE: ";

    cin >> choice;

    switch (choice)
    {
    case 1:
        serchthebook(userIndex);
        break;
    case 2:
        borrowthebookbyuser(userIndex);
        break;
    case 3:
        listofbooksborrowed(userIndex);
        break;
    case 4:
        wishbook(userIndex);
        break;
    case 5:
        main();
        break;
    default:
        cout << "INVALID CHOICE" << endl;
        getch();
        system("cls");
        usersfunction(userIndex);
    }
}

void serchthebook(int userIndex)
{
    system("cls");
    cout << "\n===================================================\n";
    cout << "               LIBRARY BOOKS LIST                  ";
    cout << "\n===================================================\n";
    for (int i = 0; i < totalnumberofbooks; i++)
    {
        cout << "ID: " << Id[i] << ", NAME: " << Name[i] << ", AUTHOR: " << Author[i] << ", QUANTITY: " << Quantity[i] << endl;
    }
    cout << "\n===================================================\n";
    serching(userIndex);
}

void serching(int userIndex)
{
    bool bookFound = false;

    cout << "ENTER THE BOOK NAME: ";
    cin >> nameofbook;
    cout << "\n===================================================\n";

    for (int i = 0; i < totalnumberofbooks; i++)
    {
        if (Name[i] == nameofbook)
        {
            cout << "ID: " << Id[i] << ", NAME: " << Name[i] << ", AUTHOR: " << Author[i] << ", QUANTITY: " << Quantity[i] << endl;
            iddbookofborrow = i;
            bookFound = true;
            break;
        }
    }

    if (!bookFound)
    {
        cout << "BOOK NOT FOUND. PLEASE CHECK THE NAME AND TRY AGAIN.\n";
    }

    cout << "\n===================================================\n";
    getch();
    system("cls");
    usersfunction(userIndex);
}

void borrowthebookbyuser(int userIndex)
{
    char yesorno;
    system("cls");
    cout << "\n===================================================\n";
    cout << "               LIBRARY BOOKS LIST                  ";
    cout << "\n===================================================\n";
    for (int i = 0; i < totalnumberofbooks; i++)
    {
        cout << "ID: " << Id[i] << ", NAME: " << Name[i] << ", AUTHOR: " << Author[i] << ", QUANTITY: " << Quantity[i] << endl;
    }
    cout << "\n===================================================\n";
    // serching(userIndex); // Find the book
    bool bookFound = false;
    cout << "Enter the Book Name : ";
    cin >> nameofbook;

    for (int i = 0; i < totalnumberofbooks; i++)
    {
        if (Name[i] == nameofbook)
        {
            cout << "ID: " << Id[i] << ", NAME: " << Name[i] << ", AUTHOR: " << Author[i] << ", QUANTITY: " << Quantity[i] << endl;
            iddbookofborrow = i;
            bookFound = true;
            break;
        }
    }

    if (!bookFound)
    {
        cout << "BOOK NOT FOUND. PLEASE CHECK THE NAME AND TRY AGAIN.\n";
        cout << "\n===================================================\n";
    }

    if (iddbookofborrow == -1)
    {
        cout << "BOOK NOT FOUND. PLEASE TRY AGAIN." << endl;
        cout << "\n===================================================\n";
        getch();
        system("cls");
        serching(userIndex);
    }

    cout << "\n===================================================\n";
    cout << "ARE YOU SURE YOU WANT TO BORROW THIS BOOK (y/n): ";
    cin >> yesorno;

    if (yesorno == 'y' || yesorno == 'Y')
    {
        if (Quantity[iddbookofborrow] > 0)
        {
            Quantity[iddbookofborrow]--;
            cout << "BOOK BORROWED SUCCESSFULLY!\n";
            cout << "REMAINING QUANTITY: " << Quantity[iddbookofborrow] << endl;

            // Store the borrowed book sigin walay ka user
            nameofbooksborrowedbyuser[userIndex][borrowedBookCount[userIndex]] = Name[iddbookofborrow];
            borrowedBookCount[userIndex]++;

            if (borrowedBookCount[userIndex] > 12)
            {
                cout << "YOU HAVE REACHED THE 12-BOOK LIMIT. PLEASE RETURN A BOOK BEFORE BORROWING MORE.\n";
            }
        }
        else
        {
            cout << "SORRY, THIS BOOK IS OUT OF STOCK." << endl;
        }
    }
    else
    {
        cout << "BORROWING CANCELED." << endl;
    }

    cout << "\n===================================================\n";
    getch();
    system("cls");
    usersfunction(userIndex);
}

void listofbooksborrowed(int userIndex)
{
    cout << "\n===================================================\n";
    cout << "THE LIST OF BOOKS USER " << user_name[userIndex] << " BORROWED: \n";

    if (borrowedBookCount[userIndex] == 0)
    {
        cout << "NO BOOKS BORROWED.\n";
    }
    else
    {
        for (int i = 0; i < borrowedBookCount[userIndex]; i++)
        {
            cout << i + 1 << " " << nameofbooksborrowedbyuser[userIndex][i] << "\n";
        }
    }

    cout << "\n===================================================\n";
    getch();
    system("cls");
    usersfunction(userIndex);
}

void wishbook(int userIndex)
{
    string bookwishname;
    cout << "\n===================================================\n";
    cout << "ENTER THE NAME AND THE AUTHOR OF THE BOOK YOU WANT TO ADD IN THE LIBRARY: ";
    cin.ignore();
    getline(cin, bookwishname);
    wishlist[wishnumbeer].username = user_name[userIndex];
    wishlist[wishnumbeer].bookName = bookwishname;
    wishnumbeer++;
    cout << "YOUR WISH HAS BEEN RECORDED. THANK YOU!\n";
    cout << "\n===================================================\n";
    getch();
    usersfunction(userIndex);
}

void viewWishes()
{
    system("cls");
    cout << "\n===================================================\n";
    cout << "LIST OF ALL USER WISHES:\n";
    if (wishnumbeer == 0)
    {
        cout << "NO WISHES HAVE BEEN RECORDED YET.\n";
    }
    else
    {
        for (int i = 0; i < wishnumbeer; i++)
        {
            cout << i + 1 << ". USER: " << wishlist[i].username << " WISHES FOR BOOK: " << wishlist[i].bookName << ".\n";
        }
    }
    cout << "\n===================================================\n";
    getch();
    system("cls");
    isuseradmin();
}
//change th eswich casses of jab koi variable dalo to kaam kharab ker rahay hai 