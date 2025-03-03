// #include <stdio.h>

// int main() {
//     int fact= 1, n = 4;
//     while(n>0)
//     {
//         fact=fact*n;
//         n=n-1;
//     }
//             printf("The factorial is : %d\n",fact);

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int flag;
//     printf("Prime numbers from 1 to 100 are:\n");
    
//     for (int n = 2; n <= 100; n++) {
//         flag = 0;
        
//         for (int i = 2; i <= n / 2; i++) {
//             if (n % i == 0) {
//                 flag = 1;
//                 break;
//             }
//         }

//         if (flag == 0) {
//             printf("%d ", n);
//         }
//     }

//     printf("\n");
//     return 0;
// }
// #include <stdio.h>
// int main() {
//   int arr[] = {1,2,3,4,5};
//   int n = sizeof(arr) / sizeof(arr[0]);
//   int small = arr[0];
//   int large = arr[0];
//   for (int i =1;i<n;i++)
//   {
//     if(arr[i]<small){
//       small = arr[i];
//     }
//   if(arr[i]>large){
//     large = arr[i];
//   }
// }
//   printf("Largest element is : %d\n",large);
//   printf("Smallest element is : %d\n",small);
//   return 0;
// }