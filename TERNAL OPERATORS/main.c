#include <stdio.h>
#include <stdlib.h>

int main()
 {
    int a=15;
    int b=20;
    int c=11;
    int x=(a>b)?a:(b-c);

    printf("%d",x);
    return 0;
}
