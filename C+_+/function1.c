#include <stdio.h>
    int Add(int x , int y)
    {
    return x + y;
    }
    void display(int x, int y) 
    {
        int result = Add(x, y);
        printf("\nSum : %d\n", result);
    }
    int main()
    {
        display(1,2);
        display(10,20);
        display(1,40);
        return 0;
    }
