Binary search :-    

Iterative method : -

#include <stdio.h>
int main( )
{
  int c, first, last, middle, n, search, array[100];

  printf("Enter number of elements\n");
  scanf("%d", &n);

  printf("Enter %d integers\n", n);

  for (c = 1; c <=n; c++)
  scanf("%d", &array[c]);

  printf("Enter value to find\n");
  scanf("%d", &search);

  first = 1;
  last = n;
  middle = (first+last)/2;

  while (first <= last) {
    if (array[middle] < search)
      first = middle + 1;
    else if (array[middle] == search) {
      printf("\n%d found at location %d.\n", search, middle+1);
      break;
    }
    else
      last = middle - 1;

    middle = (first + last)/2;
  }
  if (first > last)
    printf("Not found! %d isn't present in the list.\n", search);

  return 0;
}


Recursive Method :-


#include<stdio.h>
 int binarysearch(int arr[],int key,int first,int last){
     int mid=(first+last)/2;
      if(arr[mid]==key){
       return mid;
      }
      if(first>last){
          return -1;
      }
       if(arr[mid]>=key){
           return binarysearch(arr,key,first,mid-1);
          
       }
        else{
               return binarysearch(arr,key,mid+1,last);
           }
 }
 int main(){
     int arr[100], key, n;
     int first=1;
     int last =n;
     printf("Enter how many Number you want to entered in the array :");
     scanf("%d", &n);
     printf("Enter the array elements :");
     for(int i=1;i<=n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the number that you want to search in the array");
    scanf("%d",&key);
    int result=binarysearch(arr, key,1,n);
    if(result==-1){
        printf("The Element is not found in the given array :");
    }
        else
        {
         printf("The Element is found in the given array at :%d",result);
        }
    
 }


Time complexity :- O(log n)
