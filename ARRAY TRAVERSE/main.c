#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[50],i,n;
    printf("Please enter an array size: ");
    scanf("%d",&n);
    printf("Please enter array elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        printf("Entered elements are: ");
        for(i=0;i<n;i++){
            printf("\n%d",arr[i]);
        }

    }
    return 0;
}
