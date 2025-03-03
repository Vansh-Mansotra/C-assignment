/*Program :- Write a program to create a class with name PayApp, with different functions ,
Accept() Function will accept the amount from user .
Validate() Function will check amount (>0)
Discount() Function will calculate 10% Discount in Amount 
Display() Function will display final Bill on Screen. 
*/
#include <iostream>
using namespace std;
class PayApp {
    float amt;
    float discount_amt;
    float final_price;

public:
    void Accept() {
        cout << "\nEnter the amount: ";
        cin >> amt;
    }
    int Validate() {
        if (amt > 0) {
            return 1;
        } else {
            return 0;
        }
    }
    void Discount() {
        discount_amt = amt * 0.1;
    }
    void Display() {
        final_price = amt - discount_amt;
        cout << "Final price after discount: " << final_price << endl;
    }
};
int main() {
    int result;
    PayApp obj;
    obj.Accept();
    result = obj.Validate();
    if (result == 1) {
        obj.Discount();
        obj.Display();
    } else {
        cout << "\nInvalid Amount";
    }
    return 0;
}
