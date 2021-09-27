#include <stdio.h>
void main( )
{
     int [100];
     int n,key;
   
     printf("Enter how many number you want to insert in a array :");
     scanf("%d", &n);
     printf("Enter a array elements :");
     for(int i=1;i<=n; i++){
     scanf("%d", &A[i]);
     }
     printf("Enter a number that you want to search in the array :");
     scanf("%d", &key);
     
     for(int i=1;i<=n;i++){
         if(A[i]==key){
         printf("Elements Found at index %d", i);
         break;
         }
         
     }
If (i==n+1)
{
 printf("Elements Not Found );
}

Time complexity:-o(n)

