/* create a class with name Student_Data with function name, Welcome_Message() , this function on execution
 will display the message Welcome to MIET Jammu
 with arguments*/
#include <iostream>
#include <string>
using namespace std;
class Student_Data {
public:
    void Welcome_Message(string name) {
        cout << "Welcome to MIET Jammu, " << name << "!" << endl;
    }
};
int main() {
    string student_name;
    cout << "Enter your name: ";
    getline(cin, student_name);
    Student_Data obj;
    obj.Welcome_Message(student_name);
    return 0;
}
