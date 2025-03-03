#include <iostream>
using namespace std;
class Login_Details {
private:
    int pin;
public:
    int Validate() {
        cout << "Enter the pin: ";
        cin >> pin;
        if (pin == 1234) {
            return 1;
        } else {
            return 0;
        }
    }

    void Display() {
        cout << "Welcome to MyAPP" << endl;
    }
};

class User_Profile {
private:
    string username;
    string email_id;
    string name;

public:
    void Accept() {
        cout << "\nEnter your username: ";
        cin >> username;
        cout << "Enter your email id: ";
        cin >> email_id;
        cout << "Enter your name: ";
        cin >> name;
    }

    void Display() {
        cout << "\nUsername: " << username << endl;
        cout << "Email ID: " << email_id << endl;
        cout << "Name: " << name << endl;
    }

    void Update() {
        cout << "\nUpdate your username: ";
        cin >> username;
        cout << "Update your email id: ";
        cin >> email_id;
        cout << "Update your name: ";
        cin >> name;
    }

    void Delete() {
        username = "";
        email_id = "";
        name = "";
        cout << "\nUser details have been deleted." << endl;
    }
};

int main() {
    int result;
    Login_Details login;
    result = login.Validate();
    if (result == 1) {
        login.Display();
        User_Profile user;
        user.Accept();
        user.Display();

        int choice;
        do {
            cout << "\nChoose an option:\n1. Update Profile\n2. Delete Profile\n3. Exit\n";
            cin >> choice;
            switch (choice) {
            case 1:
                user.Update();
                user.Display();
                break;
            case 2:
                user.Delete();
                user.Display();
                break;
            case 3:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
            }
        } while (choice != 3);

    } else {
        cout << "Invalid pin. Access denied." << endl;
    }
    return 0;
}
