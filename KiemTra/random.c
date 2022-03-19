#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int k, m, n, i;
    printf("Nhap k: ");
    scanf("%d", &k);
    printf("Nhap m: ");
    scanf("%d", &m);
    printf("Nhap n: ");
    scanf("%d", &n);
    for(i = 0; i < k; i++) {
        int random = m + rand() % (m - n + 1);
        printf("%d ", random);
    }

    return 0;
}