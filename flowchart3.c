#include <stdio.h>

int main()
{
    int a, b, c, d, e;
    printf("A = ");
    scanf("%d", &a);
    printf("B = ");
    scanf("%d", &b);
    printf("C = ");
    scanf("%d", &c);
    printf("D = ");
    scanf("%d", &d);
    printf("E = ");
    scanf("%d", &e);
    if (a > b && a > c && a > d && a > e)
    {
        printf("\nA is Max\n");
    }
    else if (b > c && b > d && b > e)
    {
        printf("\nB is Max\n");
    }
    else if (c > d && c > e)
    {
        printf("\nc is Ma\n");
    }
    else if (d > e)
    {
        printf("\nD is Max\n");
    }
    else
    {
        printf("\nE is Max\n");
    }
    return 0;
}
/*if (a>b)
    {
        if (a>c)
        {
            if (a>d)
            {
                printf("A is Maximum");
            }
            else{
                printf("D is Maximum");
            }
        }
        else{
            if (c>d)
            {
                printf("C is Maximum");
            }
            else{
                printf("D is Maximum");
            }  
        }         
    }
    else
    {
        if (b>c)
        {
            if (b>d)
            {
                printf("B is Maximum");
            }
            else{
                printf("D is Maximum");
            }
        }
        else{
            if (c>d)
            {
                printf("C is Maximum");
            }
            else{
                printf("D is Maximum");
            }
        }
    }*/