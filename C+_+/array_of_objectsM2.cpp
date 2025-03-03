/*Write a program 
1) Create a class with name student_Management_System
2) Store Student Data from Roll no 1 to 10
3) Data includes (Name , RollNo, Percentage)
4) Display All Data in reverse order using arrauy of objects*/
#include<iostream>
using namespace std;
class Student_Management_System
{
    private : string Name; long int Roll_No; int Percentage;
    public : Student_Management_System(string N , long int R , int P)
    {
        Name = N;
        Roll_No = R;
        Percentage = P;
    } 
    public : void display() //function of class
    {
        cout<<"\n Name = "<<Name<<"\t"<<"Roll No. = "<<Roll_No<<"\t"<<"Percentage = "<<Percentage;
    }
};
int main()
{
    Student_Management_System obj[10] = {{"a",45,100},{"b",02,50},{"c",108,67},{"d",103,66},{"e",05,23}
    ,{"f",03,40},{"g",123,42},{"h",13,30},{"i",10,50},{"j",37,48}}; //array of object with manual int 
   int i;
   for(i = 9; i>=0;i--)
   {
    obj[i].display(); // calling of display function with array of object
}
}
