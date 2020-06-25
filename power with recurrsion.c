#include<stdio.h>

main(){


    int a,b;

    printf("Enter base : ");
    scanf("%d",&a);


    printf("Power : ");
    scanf("%d",&b);

    printf("answer is %d",p(a,b));

    return 0;

}

int p(int a,int b){
    if(b==0)
    return 1;
    else
    return (a*p(a,b-1));

}
