/*Method 1*/
#include<iostream>
using namespace std;
class Program  //class declaration
{
    private : int Reg_No; float Marks; // private member of class
    public : Program(int R , float M) //parameterized constructor of class
    {
        Reg_No = R;
        Marks = M;
    }
    public : void display() //function of class
    {
        cout<<"\n RegNumber = "<<Reg_No<<"\t"<<"Marks = "<<Marks;
    }
};
int main()
{
   Program obj[3] = {{101,450},{102,430},{103,440}}; //array of object with manual int 
   int i;
   for(i = 0; i<3;i++)
   {
    obj[i].display(); // calling of display function with array of object
  }
  obj[2].display(); 
}
