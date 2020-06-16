#include<stdio.h>
#include<conio.h>

int main()
{
    int num1,num2,n1,n2,rem;

    printf("Inter Two Number : ");
    scanf("%d %d",&num1 ,&num2);


    n1=num1;
    n2=num2;

    while(n2!=0)
    {
        rem=n1%n2;
        n1=n2;
        n2=rem;
    }

    printf("GCD=%d",n1);

    getch();


}
