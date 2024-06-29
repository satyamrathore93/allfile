#include <stdio.h>
#include <math.h>
int main()
{
    int x, n, fact = 1, power;
    float result , sum=0;
    printf("enter the value\n");
    scanf("%d", &x);
    printf("enter the number of terms\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {

        power = pow(-x, i);
        fact = fact * i;
        result = power / fact;
        sum = sum + result;
    }
    printf("%f\n", sum);
    printf("%d\n", fact);

    return 0;
}