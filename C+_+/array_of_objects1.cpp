/*Write a program to store 10 roll number of weak learners of your class and 10 roll numbers of advanced learners of your class , according to you .
Store roll numbers in two different array and display the record*/
#include<iostream>
using namespace std;
class ArrayProgram
{
    private : int a[10] = {1,2,3,4,5,6,7,8,9,77};  
    private : int a1[10] = {9,8,7,6,5,4,3,2,1};
    public : void display()
    {
        for(int i = 0; i<10; i++) cout<<" "<<a[i];
        cout<<"\n";
        for(int i = 0; i<10; i++) cout<<" "<<a1[i];
    }

};
int main()
{
    ArrayProgram obj;
    obj.display();
    return 0;
}