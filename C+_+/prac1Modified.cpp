#include <iostream>
using namespace std;

class Student {
private:
    string Name;
    long int Roll_No;
    int Percentage;
public:
    Student() : Name(""), Roll_No(0), Percentage(0) {}
    Student(string N, long int R, int P) : Name(N), Roll_No(R), Percentage(P) {}
    void display() {
        cout << "\n Name = " << Name << "\t" << "Roll No. = " << Roll_No << "\t" << "Percentage = " << Percentage;
    }
    void input() {
        cout << "Enter Student Name: ";
        cin >> Name;
        cout << "Enter Roll No.: ";
        cin >> Roll_No;
        cout << "Enter Percentage: ";
        cin >> Percentage;
    }
};

class Course {
private:
    string course_Name;
    string course_Code;
    int credits;
public:
    Course() : course_Name(""), course_Code(""), credits(0) {}
    Course(string C, string code, int cred) : course_Name(C), course_Code(code), credits(cred) {}
    void display1() {
        cout << "\n Course Name = " << course_Name << "\t" << "Course Code = " << course_Code << "\t" << "Credits = " << credits;
    }
    void input1() {
        cout << "Enter Course Name: ";
        cin >> course_Name;
        cout << "Enter Course Code: ";
        cin >> course_Code;
        cout << "Enter Credits: ";
        cin >> credits;
    }
};

class Professor {
private:
    string proff_name;
    string proff_id;
    string qualification;
public:
    Professor() : proff_name(""), proff_id(""), qualification("") {}
    Professor(string prof_N, string prof_Id, string qual) : proff_name(prof_N), proff_id(prof_Id), qualification(qual) {}
    void display2() {
        cout << "\n Professor Name = " << proff_name << "\t" << "Professor ID = " << proff_id << "\t" << "Qualification = " << qualification;
    }
    void input2() {
        cout << "Enter Professor Name: ";
        cin >> proff_name;
        cout << "Enter Professor ID: ";
        cin >> proff_id;
        cout << "Enter Qualification: ";
        cin >> qualification;
    }
};

int main() {
    Student students[3];
    Course courses[3];
    Professor professors[3];

    // Input data for Students
    for (int i = 0; i < 3; i++) {
        cout << "Enter details for Student " << i + 1 << ":" << endl;
        students[i].input();
    }

    // Input data for Courses
    for (int i = 0; i < 3; i++) {
        cout << "Enter details for Course " << i + 1 << ":" << endl;
        courses[i].input1();
    }

    // Input data for Professors
    for (int i = 0; i < 3; i++) {
        cout << "Enter details for Professor " << i + 1 << ":" << endl;
        professors[i].input2();
    }

    // Display all data
    for (int i = 0; i < 3; i++) {
        students[i].display();
        courses[i].display1();
        professors[i].display2();
    }

    return 0;
}
