#include<iostream>
using namespace std;
class Courses
{
    string course_name;
    string course_id;
    int credits;
    public : Courses()
    {
        cout<<"\nEnter the course name : ";
        cin>>course_name;
        cout<<"\nEnter the course id : ";     
        cin>>course_id;
        cout<<"\nEnter the credits : ";  
        cin>>credits;
        display();
    }
    public : void display()
    {
        cout<<"\nCourse Name : "<<course_name;
        cout<<"\nCourse Id : "<<course_id;
        cout<<"\nCourse Name : "<<credits;
    }
    public : ~Courses()
    {
        cout<<"\nDestroyed Object ...";
    }
};
int main()
{
    Courses obj;
    return 0;
}

