#include <stdio.h>

void factors(int n, int i)
{
    if (i <= n) {
        if (n % i == 0) {
            printf("%d\n",i);
        }
        factors(n, i + 1);
    }
}
int main()
{
    int N = 16;
    factors(N, 1);
}


