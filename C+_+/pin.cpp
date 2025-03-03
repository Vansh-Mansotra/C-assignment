#include<iostream> // without parameter and with return value
using namespace std;
class Program
{
    private : int pin;
    public : int validate(){ // type of validate depends on return type vlaue ( here it is 0 & 1)
        cout<<"Enter the pin";
        cin>>pin;
        if(pin == 1234)
        {
            return 1;
        }
        else{
            return 0;
        }
    } 
    public: void fun(){
        cout<<"\nHi";
    }
}; // terminator or end statement
int main()
{ int result;
    Program obj;
    // obj.display();
    result =obj.validate();
    if(result == 1){
        cout<<"Authentication Successfull";
    }
    else{
        cout<<"Authentication Failed";
    }
    obj.fun();
    return 0;
}