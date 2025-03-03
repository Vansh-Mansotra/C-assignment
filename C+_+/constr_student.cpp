#include<iostream>
using namespace std;
class student
{
    string name;
    string roll_no;
    string section;
    public : student()
    {
        cout<<"Enter the name : ";
        cin>>name;
        cout<<"\nEnter the roll number :";
        cin>>roll_no;
        cout<<"\nEnter the section : ";
        cin>>section;
        display();
    }
    public : void display()
    {
        cout<<"\nYour name is :"<<name;
        cout<<"\nYour roll number is :"<<roll_no;
        cout<<"\nYour section is :"<<section;
    }
    public : ~student()
    {
        cout<<"\nThe object has been destroyed ....";
    }
};
int main()
{
    student obj;
    return 0;
}