#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main(){
    int numbers [] = {45,2345,56,134,56,5613,5,2452,435,10000};
    int length = sizeof(numbers)/sizeof(int);
    for ( int i = 0; i < length; i++)
    {
        for (int j = 0 ; j < length - 1  ; j++){
            if (numbers[j]<numbers[j+1])
            {
                int temp = numbers[j];
                numbers[j] = numbers [j+1];
                numbers[j+1] = temp;
            }
            
        }
    }
    for (int i = 0; i < length; i++)
    {
        printf("%d => %d\n", i+1, numbers[i]);
    }
    
    

}
