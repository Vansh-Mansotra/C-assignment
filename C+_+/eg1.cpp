/*program to demonstrate working of the functuon with no return type and no parameter
oops features are required
features are like : namesapce , class , object , Access Specifier, Member variables 
and Member functions
1) main function is required to run the code
(no return type and no parameter(argument)*/
#include<iostream>
using namespace std;
class Program
{
    public : void Message()
    {
        cout<<"Hi";
    }
};
int main()
{
    Program obj; // creating instance of the class
    obj.Message(); // function calling after creating instance of class
    return 0;
}