#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=100;
    int* ptr;
    ptr=&i;
    printf("%u\n",&ptr);
     printf("%u\n",ptr);
      printf("%u\n",&i);
       printf("%d\n",*(ptr));
        printf("%d\n",i);
         printf("%d\n",*(&i));
       // printf("%u\n",*ptr);
    return 0;
}
