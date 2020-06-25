#include <stdio.h>

int factorial(int);
int main()
{
    int n, f;
    printf("Enter An integer\n");
    scanf("%d",&n);
    if(n<0)
    printf("factorial is not possible.\n");
    else
    {
        f=factorial(n);
     printf("%d!=%d\n",n,f);
}
 return 0;
}
int factorial (int n)
{
        if(n==0)
        return 1;
    else
    return (n*factorial(n-1));

}
