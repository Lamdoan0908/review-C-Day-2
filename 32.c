#include <stdio.h>

int main() {
    int N;
    printf("Nhap N: ");
    scanf("%d", &N);

    int temp = N;
    int sum = 0;

    // Tính tổng các chữ số
    while (temp != 0) {
        sum += temp % 10;  // lấy chữ số cuối và cộng vào sum
        temp /= 10;        // bỏ chữ số cuối
    }

    // Kiểm tra xem tổng kết thúc bằng 9
    if (sum % 10 == 9) {
        printf("%d la so dep.\n", N);
    } else {
        printf("%d khong phai so dep.\n", N);
    }

    return 0;
}