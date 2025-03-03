#include<iostream>
using namespace std;
class Area {
    private : int radius;
    private : double Pie;
    public:Area(int rad) {
        this->radius = rad;
        this->Pie = 3.14;
        
    }
    public : int getAreaCircle() {
            return (int)(Pie * radius * radius);
    }
};
int main()
{
    Area area(3);
    cout << area.getAreaCircle();
    return 0;
}
