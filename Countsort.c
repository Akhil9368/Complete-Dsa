#include<stdio.h>
//count sort algorithm
int main()
{
    int array[100];
    
    int size;
    printf("Enter Ho Many number that you want to entered in the array :");
    scanf("%d",&size);
    printf("Enter the %d Elements of array :",size);
    for(int i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }
    
    //count sort
    //Maximum element of the array
    int i,j;
    int max=array[0];
    for(i=1;i<size;i++)
    {
        if(array[i]>max)
            max=array[i];
    }
    
    //Creating the count and output carry
    int Saum[size];
    int count[max+1];
    
    //initializing the count array
    for(i=0;i<=max;i++)
    {
        count[i]=0;
    }
    
    //Store the cumulative count of each element
    for(i=0;i<size;i++)
    {
        count[array[i]]++;
    }
    
    //Fetching the results
    i=0;
    j=0;
    while(i<max+1)
    {
        if(count[i]>0)
        {
            Saum[j]=i;
            j++;
            count[i]--;
        }
        else
        {
            i++;
        }
        
    }
    //fetching the elements from the output array
    printf("After SOrting of Array :\n");
    for(i=0;i<size;i++)
    {
        printf("%d\t",Saum[i]);
    }
    return 0;
}