#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numbers[2][5]={1,2,3,4,5,6,7,8,9,10};
    int result;
    int count=sizeof(numbers);
    for(int i=0;i<2;i++){
            for(int j=0;j<5;j++){
               result=numbers[i][j];
             printf("%d\n",result);
            }

    }//\
    printf("The size of this array is %d",sizeof(numbers));



    return 0;
}
