#include <stdio.h>
#include <math.h>
int factorial(int n)
{
    int factorial = 1;
    for (int i = n; i >= 1; i--)
    {
        factorial = factorial * i;
    }
    return factorial;
}

int main()
{
    int n;
    printf("Nhap n:");
    scanf("%d", &n);
    int Findfactorial = factorial(n);
    printf("%d! = %d\n", n, Findfactorial);
    return 0;
}