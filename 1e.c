#include <stdio.h>
#include <math.h>
void isPrime( int n)
{
    if(n <2)
    return 0;    
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;}
            return 1;  //kh co else ma van dc 
    }

    
}
int main()
{int a;
    printf("Enter a: ");
    scanf("%d", &a);
    isPrime(a);
    if(1){printf("ok nt ");}
    else{printf("kh phai nt");}

}