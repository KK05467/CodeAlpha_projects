#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Check if user already exists
bool userExists(const string &username)
{
    ifstream file("users.txt");
    string u, p;
    while (file >> u >> p)
    {
        if (u == username)
            return true;
    }
    return false;
}

// Register a new user
void registerUser()
{
    string username, password;
    cout << "Enter new username: ";
    cin >> username;
    cout << "Enter new password: ";
    cin >> password;

    if (userExists(username))
    {
        cout << "Username already exists. Try a different one.\n";
        return;
    }

    ofstream file("users.txt", ios::app);
    file << username << " " << password << endl;
    cout << "Registration successful!\n";
}

// Login user
void loginUser()
{
    string username, password;
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    ifstream file("users.txt");
    string u, p;
    bool found = false;

    while (file >> u >> p)
    {
        if (u == username && p == password)
        {
            found = true;
            break;
        }
    }

    if (found)
    {
        cout << "Login successful! Welcome, " << username << "!\n";
    }
    else
    {
        cout << "Invalid username or password.\n";
    }
}

int main()
{
    int choice;

    while (true)
    {
        cout << "\n=== MENU ===\n";
        cout << "1. Register\n";
        cout << "2. Login\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1)
            registerUser();
        else if (choice == 2)
            loginUser();
        else if (choice == 3)
        {
            cout << "Exiting... Goodbye!\n";
            break;
        }
        else
            cout << "Invalid choice. Try again.\n";
    }

    return 0;
}