#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Student {
public:
    string name;
    int rollNumber;
    Student(string studentName, int studentRollNumber)
        : name(studentName), rollNumber(studentRollNumber) {}
    // Member function to search for a student by name
    bool searchByName(const string& searchName) const {
        return name == searchName;
    }
};
int main() {
    vector<Student> students;
    int numStudents;  
    cout << "Enter the number of students: ";
    cin >> numStudents;
    cin.ignore();  // Ignore the newline character left by cin
    for (int i = 0; i < numStudents; ++i) {
        string studentName;
        int studentRollNumber;
        cout << "Enter name of student " << i + 1 << ": ";
        getline(cin, studentName);
        cout << "Enter roll number of student " << i + 1 << ": ";
        cin >> studentRollNumber;
        cin.ignore();  // Ignore the newline character left by cin
        students.push_back(Student(studentName, studentRollNumber));
    }
    string searchName;
    cout << "Enter the name of the student to search for: ";
    getline(cin, searchName);
    bool found = false;
    for (const auto& student : students) {
        if (student.searchByName(searchName)) {
            found = true;
            cout << "Student found: " << student.name << " with roll number " << student.rollNumber << endl;
            break;
        }
    }
    if (!found) {
        cout << "Student not found!" << endl;
    }
    return 0;
}
