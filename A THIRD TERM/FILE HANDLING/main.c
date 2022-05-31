// #include <stdio.h>
// #include <stdlib.h>

// int main(){
//     FILE *fptr;
//     //We are writing file if the file already exists it will for 
//     fptr= fopen("patrick.txt","w");
//     printf("File is created"); 
//     return 0;
// }
#include <stdio.h>
#include <string.h>
int main () {
   int len;
   const char str1[] = "D D DE ABCDEFG019874 ABCDEF";
   const char str2[] = "ABCDF";
   len = strspn(str1, str2);
   printf("Length of initial segment matching %d\n", len );
   printf("Length of initial segment matching %d\n", strspn("a vowel","bvcwl"));
   printf("Length of initial segment matching %d\n", strcspn("a vowel","@,*e") );
   return(0);
}