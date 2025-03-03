#include<iostream>
using namespace std;
class Program
{
     public : Program()
     {
        cout<<"HI";
     }
     public : ~Program()
     {
        cout<<"\nHELLO";
     }
};
int main()
{
    Program obj;
    return 0;
}