#include <stdio.h>

void main() 
{
     
    int s,no,s1,s2,s3,s4,s5,t;
    float p;

    printf("Student Roll No. : ");
    scanf("%d",&no);

    printf("Standard = ");
    scanf("%d",&s);

    printf("\nsubject \tMarks\tGet ");
    printf("\n\nGujrati \t100 \t");
    scanf("%d", &s1);

     
    printf("\nMath's  \t100 \t");
    scanf("%d", &s2);

     
    printf("\nEnglish \t100 \t");
    scanf("%d", &s3);

     
    printf("\nHindi   \t100 \t");
    scanf("%d", &s4);

     
    printf("\nEconomics\t100 \t");
    scanf("%d", &s5);

    t=s1+s2+s3+s4+s5;
    printf("\nTotal   \t500 \t%d\n",t);

    p=t*100/500;
    printf("\nper :%.2f\t",p);
    if (p<=35)
    {
        printf("Fail\n\n");
    }
    if (p<=50)
    {
        printf("D Grade\n\n");
    }
    if (p<=70)
    {
        printf("C Grade\n\n");
    }
    if (p<=80)
    {
        printf("B Grade\n\n");
    }
    if (p<=90)
    {
        printf("A Grade\n\n");
    }
    if (p<=100)
    {
        printf("A++ Grade\n\n");
    }
}
