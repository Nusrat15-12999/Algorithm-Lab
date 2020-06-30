
#include<stdio.h>
#include<conio.h>

int n, F[100000];

int main() {
    F[0] = 0;
    F[1] = 1;

    scanf("%d",&n);

    for (int i = 2; i <= n; i++)
    {
        F[i] = (F[i - 1] + F[i - 2]) % 10;
    }

   printf("%d",F[n]);
   getch();
}
