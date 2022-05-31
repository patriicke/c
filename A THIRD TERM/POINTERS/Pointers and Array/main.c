#include<stdio.h>
#include<stdlib.h>

int main(){
    int a[4]={1,2,6,4};
    int *pa;
    // for(i=0;i<4;i++){
    //     printf("&a[%d] = %p\n",i,&a[i]);
    // }
    pa=&a[1];
    printf("Address at index a[1] = %d\n",&a[1]);
    printf("Address at index a[2] = %d\n",&a[2]);
    printf("Address of a at index 1 = %d\n",pa);
    printf("value of a at index 1 = %d\n",*pa);
    printf("value of a at index 2 = %d",*(pa+1));
}