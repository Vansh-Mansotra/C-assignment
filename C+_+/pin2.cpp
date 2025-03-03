#include<iostream> // with parameter and no return type
// using namespace std;
class Program
{
    private : int pin;
    public : int validate(){ // type of validate depends on return type vlaue ( here it is 0 & 1)
        std ::cout<<"Enter the pin";
        std ::cin>>pin;
        if(pin == 1234)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    } 
    void display_balance(int amount) // here amount is formal value 
    {
        std ::cout<<"\nYour balance is "<<amount;
    }
    public: void fun()
    {
        std ::cout<<"\nHi";
    }
}; // terminator or end statement
int main() {
    int result , amt = 10000; // here amt is actual value
    Program obj;
    // obj.display();
    result =obj.validate();
    if(result == 1)
    {
        std ::cout<<"Authentication Successfull";
        obj.display_balance(amt);
    }
    else
    {
        std ::cout<<"Authentication Failed";
    }
    obj.fun();
    return 0;
}