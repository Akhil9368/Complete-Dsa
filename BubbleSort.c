#include<stdio.h>    
 void print(int arr[], int n) //function to print array elements  
    {  
    int i;  
    for(i = 0; i < n; i++)    
    {    
        printf("%d ",arr[i]);    
    }        
    }  
 void bubble(int arr[], int n) // function to implement bubble sort  
 {  
   int i, j, temp;  
   for(i = 0; i < n; i++)    
    {    
      for(j = i+1; j < n; j++)    
        {    
            if(arr[j] < arr[i])    
            {    
                temp = arr[i];    
                arr[i] = arr[j];    
                arr[j] = temp;     
            }     
        }     
    }     
 }  
void main ()    
{    
        int arr[100];
        int n;
        printf("Enter How many number that you want to Enter in the array :");
        scanf("%d",&n);
        printf("Enter the array elements :\n");
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        printf("before sorting of array are :\n");
           print(arr, n);
           printf("\n");
         printf("After sorting of array are :\n");
           bubble(arr,n);
           
           print(arr, n);
       
           
           
        
}  
