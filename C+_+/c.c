#include <stdio.h>
int rectangle(int length , int breadth);
int main() {
    int length , breadth;
    printf("Enter the length");
    scanf("%d",&length);
    printf("Enter the breadth");
    scanf("%d",&breadth);
    printf("The area of rectangle : %d",length*breadth);
    return 0;
}
int rectangle(int length , int breadth){
return length*breadth;
}