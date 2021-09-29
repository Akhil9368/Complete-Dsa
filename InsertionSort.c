#include<stdio.h>
void main ()
{
  int arr[100];
  int key, j, n;
  printf ("Enter How Many Number That You Want to Entered in the array :");
  scanf ("%d", &n);
  printf ("Enter the Array Elements :");
  for (int i = 0; i<n; i++)
    {
      scanf ("%d", &arr[i]);
    }
  for (int i = 1; i < n; i++)
    {
      key = arr[i];
      j = i - 1;

      while (j >= 0 && arr[j] > key)
	{
	  arr[j + 1] =arr[j];
	  j = j - 1;
	}
      arr[j + 1] = key;
    
    }
     for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
}
