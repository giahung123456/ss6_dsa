#include <stdio.h>
void nhiPhan();
int main() {

   int num;
    printf("Enter the number of processes:");
    scanf("%d", &num);
    // chia 2

     nhiPhan(num);

    return 0;
}
void nhiPhan(int num) {

    int a=num/2;

    int b=num%2;
    printf("i truoc:%d\n");

    if (num==0) {
        return;
    }




    nhiPhan(a);
printf("%d\n",b);




}