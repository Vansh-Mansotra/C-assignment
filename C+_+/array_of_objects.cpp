/* Program to demonstrate array declaration and array declaration and array initialization using direct method*/
#include<iostream>
using namespace std;
class ArrayProgram
{
   private : int a[5];
   public : void display() // array declaration
   {
    int b[5] = {1,2,3,4,5};
    a[0] = 10;
    a[1] = 5;
    a[2] = 1;
    cout<<"\nArray Element at index 0 is : "<<a[0];
    cout<<"\nArray Element at index 1 is : "<<a[1];
    cout<<"\nEnter an element : ";
    cin>>a[2];
    cout<<"\n Array Element entered by the user at index 2 is : "<<a[2];
    cout<<"\n Array Element entered by the user at index 2 is : "<<a[2];
    for(int i = 0; i<5; i++) cout<<"\n"<<b[i];
}
};
int main()
{
    ArrayProgram obj;
    obj.display();
    return 0;
}
