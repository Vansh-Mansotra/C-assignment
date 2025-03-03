/*#include <stdio.h>

int main() {
    int i = 1;
    int n;
    printf("Enter the choice : \n");
    scanf("%d",&n);
           printf("The table of %d :- \n",n);
    while (i<11){
      printf("%d * %d = %d\n",n,i,n*i);
      i = i+1;
}        return 0;}
*/
// by using for loop
// #include <stdio.h>

/*int main() {
    int i = 0 ;
    int n;
    printf("Enter the choice : ");
    scanf("%d",&n);
    for (i = 1 ; i < 11; i++){
        printf("%d X %d = %d\n",n,i,n*i);
    }
    return 0;
}*/
/*sum of first 10 natural numbers*/
#include <stdio.h>

// int main() {
//     int sum = 0;
//     for (int i=1;i<=100;i++){
//         sum = sum +i;
       
//     }
//     printf("%d",sum);
//     return 0;
// }
// #include <stdio.h>

// int main() {
//     int sum = 0;int i;
//     while (i<101){
//         sum = sum +i;
//         i=i+1;
//     }
//     printf("Sum = %d",sum);
//     return 0;
// }
/* sum of numbers which occur in the table of 8*/
// #include <stdio.h>

// int main() {
//     int sum = 0; 
//     for (int i = 0; i<=2;i++){
//         sum += (8*i) ;
//     }
//     printf("Sum is : %d",sum);
//     return 0;
// }
/*factorial*/
// #include <stdio.h>

// int main() {
//     int product = 1;
//     int fact = 5;
//     for (int i = 1 ; i <= fact; i++){
//         product*=i;
//     }
//     printf("Factorial of %d : %d ",fact, product);
//     return 0;
// }
// #include <stdio.h>

// int main() {
//     int n = 107 ;
//     int prime = 0;
//     for (int i = 2; i<n; i++)
//     {
//         if (n%i==0 && n !=2){
//             prime = 1;
               //break;
//         }
//     }if(prime){
//         printf("not prime number \n");
//     }
//     else{
//         printf(" prime\n");
//     }
//     return 0;
// }