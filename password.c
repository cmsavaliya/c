#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a,b;
    printf("creat your password = ");
    scanf("%d",&a);
    
    printf("enter your password = ");
    scanf("%d",&b);

    if (a==b)
    {
        printf("welcome to goa singham");
    }
    else
    {
        printf("you are wrong singham");
    }
    

    return 0;
}
