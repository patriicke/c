#include <stdio.h>
int main(void){
int nCalculate = 1;
while(nCalculate <= 12){
if(nCalculate==4){
    break;
}
nCalculate++;
printf("%d ", nCalculate);
}
printf("\n");
return 0;
}
