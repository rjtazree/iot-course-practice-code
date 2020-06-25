#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>

void addition();
void subtraction();
void multiplication();
void division();
void modulus();
void calculator();

int main()
{
    char stable_screen;

    while(1)
    {
    calculator();

    printf("Enter choice : ");
        stable_screen=getche();

        switch(stable_screen)
        {
            case '1': addition();
                      break;

            case '2': subtraction();
                      break;
            case '3': multiplication();
                      break;
            case '4': division();
                      break;
            case '5': modulus();
                      break;
            case '6': exit(0);
                      break;

        }
    }
}

void calculator()
{
    printf("\n\t\t\tCalculator \n\n");
    printf("Press 1. for Addition \n");
    printf("Press 2. for Subtraction \n");
    printf("Press 3. for Multiplication \n");
    printf("Press 4. for Division \n");
    printf("Press 5. for Modulus\n");
    printf("Press 6. Quit \n\n");
}

void addition()
{
    int n, total=0, k=0, number;
    printf("\nEnter the number of elements you want to add : ");
    scanf("%d",&n);
    printf("\nEnter %d numbers one by one: \n",n);
    while(k<n)
    {
        scanf("%d",&number);
        total=total+number;
        k=k+1;
    }
    printf("Sum of %d numbers = %d \n",n,total);
}

void subtraction()
{
    int a, b, c = 0;
    printf("\nEnter first number  : ");
    scanf("%d", &a);
    printf("Enter second number : ");
    scanf("%d", &b);
    c = a - b;
    printf("\n%d - %d = %d\n", a, b, c);
}

void multiplication()
{
    int a, b, mul=0;
    printf("\nEnter first numb   : ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    mul=a*b;
    printf("\nMultiplication of entered numbers = %d\n",mul);
}

void division()
{
    int a, b, d=0;
    printf("\nEnter first number  : ");
    scanf("%d", &a);
    printf("Enter second number : ");
    scanf("%d", &b);
    d=a/b;
    printf("\nDivision of entered numbers=%d\n",d);
}

void modulus()
{
    int a, b, d=0;
    printf("\nEnter first number   : ");
    scanf("%d", &a);
    printf("Enter second number  : ");
    scanf("%d", &b);
    d=a%b;
    printf("\nModulus of entered numbers = %d\n",d);
}

