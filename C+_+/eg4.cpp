/*add 1 more function with name Validate_RegNo() , this function will accept student name
registration number from student and validate it .
(valid reg_no's are from 61 to 120*/
#include<iostream>
#include<string>
using namespace std;
class Student_Data
{
public : void Welcome_Message()
{
    cout<<"Welcome to MIET Jammu";
}
private : string Name ; // encapsulation for data & abstraction for functions
int RegNo; 
public : string Validate_RegNo() // for accepting true or false values i.e (string)
{
 cout<<"\n Enter your name"; // user input name 
 cin>>Name;
 cout<<"\n Enter your registration number";
 cin>>RegNo;
 if(RegNo >= 61 && RegNo <= 120){
    return "True";
 }
 else{
    return "False";
 }
}
};
int main()
{
   Student_Data obj;
   obj.Welcome_Message();
   string res;
   res = obj.Validate_RegNo();
   if(res == "True"){
    cout<<"\n Login Successful";
   }else{
    cout<<"\n Login Failed";
   }
   return 0;
}