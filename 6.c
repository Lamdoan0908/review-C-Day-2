//while can kh lap lan nao
//while(condition)
#include <stdio.h>

int main() {
    int n, reversed = 0, temp;

    printf("Nhap n: ");
    scanf("%d", &n);

    temp = n;

    while (temp != 0) {
        reversed = reversed * 10 + temp % 10;
        temp /= 10;
    }

    printf("So dao nguoc cua %d la: %d\n", n, reversed);

    return 0;
}
  