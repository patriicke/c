#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    for(n=1;n<=10;n++){
        if(n==5)
            continue;
        if(n==9)
            break;
        printf("%d",n);

    }
    return 0;
}
