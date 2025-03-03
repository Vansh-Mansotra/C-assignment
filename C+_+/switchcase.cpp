/*Write a program to create two classes, 
1. Class Login Details,
with function as :-
a)  Validate() accept Login password (default 1234) from user
b)  Dispay() display message on Screen "Welcome to MyAPP"
2. Class User_Profile 
with funtions as :-
a)  Accept() accept username , email id and name from user 
b)  Display() will display information entered by the user on screen.
c) Update() to update details 
d) Delete() to remove all information*/
#include<iostream>
using namespace std;
class Login_Detail
{
    private : int pin;
    public : int validate()
    {
    cout<<"Enter the pin : ";
    cin>>pin;
        if(pin==1234)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    public : void Display()
    {
        cout<<"\nWelcome to MyAPP";
    }
};
class User_Profile 
{
    string name;
    string username;
    string email_id;
    public : void Accept()
    {
        cout<<"\n\nEnter your name : ";
        cin>>name;
        cout<<"\nEnter your username : ";
        cin>>username;
        cout<<"\nEnter your email id : ";
        cin>>email_id;
    }
    void Display()
    {
        cout<<"\nYour name is : "<<name;
        cout<<"\nYour username is : "<<username;
        cout<<"\nYour email is : "<<email_id;
    }
    void Update()
    {
        Accept();
    }
    void Delete()
    {
        name =""; 
        username =""; 
        email_id =""; 
        cout<<"\nYour information is deleted successfully";
    }

};
int main()
{
    int result;
    Login_Detail obj;
    result = obj.validate();
    if(result == 1)
    {
        obj.Display();
        User_Profile obj;
        obj.Accept();
        obj.Display();
        int choice ;
        do
        {
        cout<<"\nEnter the choice : 1) -> Update details \n2) -> Delete information \n3) -> Exit ";
        cin>>choice;
        switch(choice)
        {
            case 1:
            obj.Update();
            obj.Display();
            break;
            case 2:
            obj.Delete();
            obj.Display();
            break;
            case 3:
            cout<<"\nExiting ....";
            break;
            default :
            cout<<"\nInvalid Choice . Please try again";

        }
    }while(choice !=3);
}else
{
    cout << "\nInvalid pin. Access denied.";
}
return 0;
}