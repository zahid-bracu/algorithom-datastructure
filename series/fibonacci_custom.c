

#include <stdio.h>
void fibo(int first,int second,int end){
    if(second<end){
        printf("%d\n",first);
        int third=first+second;
        first=second;
        second=third;
        fibo(first,second,end);
        }

    }
int main()
{
    int first=0;
    int second=1;
    int end=40;
    fibo(first,second,end);
    return 0;
}
