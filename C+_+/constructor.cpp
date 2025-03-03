#include<iostream>
using namespace std;
class Program{
    public : Program(){
        cout<<"Hi";
        // Hi();
    }
    public : void Hi(){
        cout<<"\nHello";
    }
};
int main(){
    Program obj;
    obj.Hi();
    return 0;
}
