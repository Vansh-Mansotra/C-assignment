#include<iostream>
using namespace std;
class Student
{
    private : string Name; long int Roll_No; int Percentage;
    public : Student(string N , long int R , int P)
    {
        Name = N;
        Roll_No = R;
        Percentage = P;
    } 
    public : void display() 
    {
        cout<<"\n Name = "<<Name<<"\t"<<"Roll No. = "<<Roll_No<<"\t"<<"Percentage = "<<Percentage;
    }
};
class Course
{
    private : string course_Name; string course_Code; int credits;
    public : Course(string C , string code , int cred)
    {
        course_Name = C;
        course_Code = code;
        credits = cred;
    }
    public : void display1()
    {
        cout<<"\n Course Name = "<<course_Name<<"\t"<<"Course Code = "<<course_Code<<"\t"<<"Credits = "<<credits;
 
    }
};
class Professor
{
    private : string proff_name; string proff_id; string qualification;
    public : Professor(string prof_N , string prof_Id , string qual)
    {
        proff_name = prof_N;
        proff_id = prof_Id;
        qualification = qual;
    }
    public : void display2()
    {
        cout<<"\n Professor Name = "<<proff_name<<"\t"<<"Professor ID = "<<proff_id<<"\t"<<"Qualification = "<<qualification;
 
    }
};
int main() {
    Student s[3] = {{"a", 45, 100}, {"b", 2, 50}, {"c", 108, 67}};
    Course c[3] = {{"Maths", "BSC-310", 4}, {"EVS", "NCC-210", 2}, {"Physics", "PHY-123", 5}};
    Professor p[3] = {{"Dr.Ashish", "310", "PHD"}, {"Dr.Ajit", "210", "PHD"}, {"Surinder", "410", "PHD"}};
   
    for (int i = 0; i < 3; i++) {
        s[i].display();
        c[i].display1();
        p[i].display2();
    }
    return 0;
}