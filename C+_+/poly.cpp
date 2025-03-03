#include<iostream>
using namespace std;
class Shapes
{
    private : float res = 0 ;
    float l1;
    float b;
    public : void Area(float radius) //function 1
    {
        res = 3.14 * radius * radius;
        cout<<"\nArea of circle is : "<<res;
    }
    public : void Area(float l , float h) //function2
    {
        res = 0.5 * l * h;
        cout<<"\nArea of triangle is : "<<res;
    }
    public : void Area() //function 3
    { 
    l1 = 6;
    b = 9;
    res = l1 * b;
    cout<<"\n Area of rectangle : "<<res;   
}
};
int main()
{
    Shapes obj;
    obj.Area();
    obj.Area(6);
    obj.Area(4,5);
    return 0;
}


