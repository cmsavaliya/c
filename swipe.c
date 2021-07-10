#include <stdio.h>

int main()
{
    int a,b,c;
    printf("a = ");
    scanf("%d",&a);

    printf("b = ");
    scanf("%d",&b);

    // a=a+b; //10+20=30
    // b=a-b; //30-20=10
    // a=a-b; //30-10=20

    c=a; //c=10
    a=b; //a=20
    b=c; //b=10


    printf("A = %d B = %d",a, b);

    return 0;
}
