#include <stdio.h>
int tinhTong();
int main() {

   int num;
    printf("Enter a number: ");
    scanf("%d", &num);

   // chia 10
    int result = tinhTong(num);
    printf("The sum of the fibonacci is: %d", result);

    return 0;
}
int tinhTong(int num) {
    int a=num/10;
    int b=num%10;
    if (num==0) {
        return 0;
    }
    return b+tinhTong(a);
}