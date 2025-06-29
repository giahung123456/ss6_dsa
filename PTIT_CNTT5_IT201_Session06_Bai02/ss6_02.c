#include <stdio.h>
void fibonacci();
int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int start=0;
    int end=1;
    if (n==1) {
        printf("0");
        return 0;
    }else if (n==2) {
        printf("0 1");
        return 0;
    }


    fibonacci(n,start,end);
    printf("%d\n",end);
    printf("%d\n",start);
    return 0;
}
void fibonacci(int n,int start,int end) {
    if (n==2) {
        return ;
    }
    int sum=start+end;

    fibonacci(n-1,end,sum);
printf("%d\n",sum);


}