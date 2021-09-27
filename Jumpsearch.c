
Jump Search

#include <stdio.h>
#include<math.h>
int main( ){   // #nt ==> int
    int c,i, start, jump, n, search=0, array[100];
    printf("Enter number of elements\n");
    scanf("%d", &n);
    printf("Enter %d integers\n", n);
    for (c = 1; c <=n; c++) scanf("%d", &array[c]);
    printf("Enter value to find\n");
    scanf("%d", &search);
    jump=(int)floor(sqrt(n));
    for(i=0;i<n;){
        if(array[jump]>search){
            break;
        }
        else{
            i=i+jump;
        }
    }
    for(int j=i;j>=0;j--) {
        if(array[j]==search){
            printf("The Element is Found at index %d",j);
            search=1;
            break;
        }
    }    
    if(search==0){
        printf("The Element is not found in any of the indexes");
    }
}
