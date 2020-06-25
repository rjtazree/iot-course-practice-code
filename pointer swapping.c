
#include <stdio.h>

int main()
{int x,y,*a,*b,temp;

printf("Enter the number :");
scanf("%d%d",&x,&y);

a=&x;
b=&y;

temp=*b;
*b=*a;
*a=temp;
printf("After swapping x=%d y=%d\n",x,y);
return 0;
}