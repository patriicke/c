#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j;
    printf("Input a positve integer:");
    scanf("%d",&n);
    if(n>0){
        for(i=n;i>=1;i--){
            printf("*");
            for(j=i-1;j>=1;j--){
                printf("*");
            }
printf("\n");
        }

    }
    else{
        printf("Thank you for using this program.");
    }


    return 0;
}
