#include <stdio.h>
int main ()
{
    int i, j;
    char n, x= 'A';
    scanf("%c", &n);
    for(i=1; i<=(n-'A'+1); i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%c ", x);
        }
        x++;
        printf("\n");
    }
}