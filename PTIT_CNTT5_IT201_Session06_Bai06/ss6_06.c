#include <stdio.h>
int bacThang();
int main() {
    int n;
    printf("Enter the number of processes:");
    scanf("%d", &n);
    int i=0;
    int result=bacThang(n,i);
    printf("The number of processes is %d",result);
    return 0;
}
int bacThang(int n,int i) {
    if(i>n) {
        return 0;
    }
    if (i==n) {
        return 1;
    }
    return bacThang(n,i+1)+bacThang(n,i+2);
}