#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Student {
public:
    string name;
    int rollNumber;

    Student(string studentName, int studentRollNumber)
        {name = studentName ;
            rollNumber = studentRollNumber;
}
    // Member function to search for a student by name
    bool searchByName(const string& searchName) const {
        return name == searchName;
    }
};
int main() {
    vector<Student> students;
    students.push_back(Student("Alice", 1));
    students.push_back(Student("Bob", 2));
    students.push_back(Student("Charlie", 3));
    string searchName = "Bob";
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
