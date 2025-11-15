#include <stdio.h>
#include <math.h>

void isPrime(int n) {
    if (n <= 1) {
        printf("%d khong phai so nguyen to\n", n);
        return;
    }
    if (n == 2) {
        printf("%d la so nguyen to\n", n);
        return;
    }

    int flag = 1; // giả sử là số nguyên tố
    int limit = (int)sqrt(n);

    for (int i = 2; i <= limit; i++) {
        if (n % i == 0) {
            flag = 0; // không phải số nguyên tố
            break;
        }
    }

    if (flag)
        printf("%d la so nguyen to\n", n);
    else
        printf("%d khong phai so nguyen to\n", n);
}

int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);

    isPrime(n);

    return 0;
}