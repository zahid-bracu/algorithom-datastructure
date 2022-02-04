

#include <stdio.h>
int main()
{
    int first=0;
    int second=1;
    for(int i=0;i<10;i++){
        printf("%d\n",first);
        int third=first+second;
        first=second;
        second=third;

    }
    return 0;
}
