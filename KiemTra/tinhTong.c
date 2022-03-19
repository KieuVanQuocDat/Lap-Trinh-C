#include <stdio.h>

int main()
{
    int n, i;
    float sum = 0;
    printf("Nhap n: ");
    scanf("%d", &n);
    
    for(i = 1; i <= n; i++) {
        if (i%2 != 0) {
            sum += (float) 1 / i;
        } else {
            sum -= (float) 1 / i;
        }
    }
    printf("Sum: %f", sum);

    return 0;
}