#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numbers[100]={1,2,3,[10]=10,11,12,[57]=50,[42]=420,43,56,78};
    int i;
    //Output each element's value
    for(i=0;i<100;i++){
        printf("Element[%d]=%d \n",i,numbers[i]);
    }
    return 0;
}
