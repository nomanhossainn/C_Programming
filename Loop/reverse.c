#include<stdio.h>
int main(){
    int n, digit;
    scanf("%d", &n);
    while(n>0)
    {
        digit=n%10;
        printf("%d",digit);
        n=n/10;
    }
}