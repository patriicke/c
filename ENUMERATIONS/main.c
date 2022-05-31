#include<stdio.h>

enum week {Mon = 10, Tue, Wed, Thur, Fri = 10, Sat = 16, Sun};
enum days
{
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday=18,
    Saturday=11,
    Sunday
};

int main(){
    printf("The value of enum week: %d\t%d\t%d\t%d\t%d\t%d\t%d\t\n", Mon, Tue, Wed, Thur, Fri, Sat, Sun);
    printf("The Dvalue  of enum day: %d\t%d\t%d\t%d\t%d\t%d\t%d\t", Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday);
    return 0;
}