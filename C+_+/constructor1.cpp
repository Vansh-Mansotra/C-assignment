#include<iostream>
using namespace std;
class Program
{
    public : Program(string name , long long int mob){
        cout<<"Your name is : "<<name;
        cout<<"\nYour contact number is : "<<mob;
    }
};
int main()
{
    string no_;
    long long int contact;
    cout<<"Enter your name and contact details : ";
    cin>>no_>>contact;
    Program obj(no_,contact);
    return 0;
}
