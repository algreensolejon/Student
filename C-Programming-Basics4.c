#include<stdio.h>
int main(){

    int n, rev=0, remainder;

    printf("Input any integer:");
    scanf("%d", &n);

    while (n!=0)
    {
        remainder=n%10;
        rev=rev*10+remainder;
        n/=10;
    }
    printf("Revised for inputted integer is %d", rev);
    return 0;
}
