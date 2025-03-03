/*Program to demonstrate working of function overloading and constructor overloading .
create a class with name LoginApp , with function name Register(),
overload this function three times in program.
1) Register function will accept username and display "Hi Message with user name"
2) Register function will accept Regsitration Number and Validate Regsitration number between (1 to 50)
3) Register function will accept Marks and calculate Credit , for every 10 marks provide 1 credit (Max 100)
4) Create default constructor of class , display message "Welcome to LoginApp"
5) Create parameterised constructor of a class , that accept Login credentials, like Login Pin*/
#include<iostream>
using namespace std;
class LoginApp
{
    private : string username;
    public : void Register()
    {
    cout<<"\nPlease enter your username : ";
    cin>>username;
    cout<<"\nHi"<<username;
    }
    private :  int reg_no;
    public : void Register()
    {
        cout<<"\nPlease enter your registration number : ";
        cin>>reg_no;
        if (reg_no<=50)
        {
            
        }
    }


};
int main()
{
    LoginApp obj;
    obj.Register();
    return 0;
}