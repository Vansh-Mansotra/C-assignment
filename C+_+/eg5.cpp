/*Write a program to create two classes, 
1. Class Login Details,
with function as :-
a)  Validate() accept Login password (default 1234) from user
b)  Dispay() display message on Screen "Welcome to MyAPP"
2. Class User_Profile 
with funtions as :-
a)  Accept() accept username , email id and name from user 
b)  Display() will display information entered by the user on screen.*/
#include<iostream>
using namespace std;
class Login_Details{
    private : int pin;
    public : int Validate(){
    cout<<"\nEnter the pin : ";
    cin>>pin;
    if(pin == 1234){
        return 1;
    }else{
        return 0;
    }
}
public : void Display_1(){
    cout<<"\nWelcome to MyAPP";
} 
};
class User_Program{
    string username;
    string email_id;
    string name;
    public : void Accept(){
        cout<<"\nEnter your username : ";
        cin>>username;
        cout<<"\nEnter your email id : ";
        cin>>email_id;
        cout<<"\nEnter your name : ";
        cin>>name;
    }
    public : void Display_2(){
        cout<<"\nYour username :"<<username;
        cout<<"\nYour email :"<<email_id;
        cout<<"\nYour name :"<<name;
    } 
};
int main(){
    int result;
    Login_Details obj;
    result=obj.Validate();
    if(result == 1 ){
        obj.Display_1();
        User_Program obj;
        obj.Accept();
        obj.Display_2();
    }else{
        cout<<"\nInvalid Pin";
    }
    return 0;
}
