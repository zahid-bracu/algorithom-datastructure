
#include <stdio.h>

int fibo(int n){
    if(n==0)
        return 0;
    if(n == 1 || n==2)
        return 1;

    return fibo(n-2)+fibo(n-1);
}

int main()
{
    int maxNumber=10;
    for(int i=0;i<maxNumber;i++){
        printf("%d\n",fibo(i));
    }
    return 0;
}
