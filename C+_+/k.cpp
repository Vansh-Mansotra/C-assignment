#include<iostream>
using namespace std;
class Program
{
    public : // access specifier
    void display() // function defination
    {
        cout<<"Hello";
    }
    public:
    void fun(){
        cout<<"\nHi";
    }
}; // terminator or end statement
int main()
{
    Program obj;
    obj.display();
    obj.fun();
    return 0;
}