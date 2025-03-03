#include <stdio.h>
void add(int a , int b,int *res){
    *res = a+b;
}
int main(){
    int a = 10 , b = 5 , c;
    add(a,b,&c);
    printf("Sum : %d",c);
    return 0;
}
