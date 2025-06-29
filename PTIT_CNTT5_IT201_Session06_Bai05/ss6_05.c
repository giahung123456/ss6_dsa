#include <stdio.h>
void thapHn();
int main() {
    int n;

    printf("Enter the number of processes:");
    scanf("%d", &n);
    int m=0;
    int p=0;
    int arrA[n];
    int arrB[n];
    int arrC[n];

    for(int i=0; i<n; i++) {
        arrA[i] = i+1;
    }
    thapHn(arrA,arrB,arrC,n,m,p);
    return 0;
}
void thapHn(int *arrA,int *arrB,int *arrC,int n,int m,int p) {



}