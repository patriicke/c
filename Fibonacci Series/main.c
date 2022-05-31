#include <stdio.h>
#include <stdlib.h>
int main(){
    int i=0;
    int j=1;
    int result=0;
    while(result<50){

        if(result>50){
        break;
        }else{
        printf("%d\n",result);
        }
        result=i+j;
        i=j;
        j=result;
        result=j;

        }
    return 0;
}
