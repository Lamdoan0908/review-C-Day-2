//while can kh lap lan nao, do while thi it nhat 1 lan

#include <stdio.h>

int printEvenNumber(int a, int b) {
    int sum = 0;

    for (int i = a; i <= b; i++) {
        if (i % 2 == 0) {
            sum += i;
        }
    }

    printf("Tong cac so chan tu %d den %d la: %d\n", a, b, sum);
    return sum;
}

int main() {
    int a, b;

    printf("Nhap a: ");
    scanf("%d", &a);

    printf("Nhap b: ");
    scanf("%d", &b);

    int sum = printEvenNumber(a, b);

    return 0;
}
