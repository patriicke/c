#include <stdio.h>
#include <stdlib.h>

int main()
{
int marks,totalMarks=0,numSubjects,i,studentCode,total;
float percentage;

printf("Enter student code: ");
scanf("%d",&studentCode);
printf("Enter number of subjects: ");
scanf("%d",&numSubjects);
for(i=1;i<=numSubjects;i++){
    printf("Enter Subject %d marks: ",i);
    scanf("%d",&marks);
    totalMarks=totalMarks+marks;
}
total=numSubjects*100;
percentage=(totalMarks*100);
printf("============OUTPUT=============\n");
printf("STUDENT CODE: %d\n",studentCode);
printf("TOTAL MARKS OBTAINED:  %d/%d\n",totalMarks,total);
printf("PERCENTAGE: %0.2f%c.",percentage/total,'%');

}


