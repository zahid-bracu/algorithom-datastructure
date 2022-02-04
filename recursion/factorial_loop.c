
#include <stdio.h>
int main() {
    int fact=1;
    int n=5;
    for(int i=1;i<=n;i++){
            printf("%d\n",i);
           fact=fact*i;

    }
    printf("%d\n",fact);
    return 0;
}
