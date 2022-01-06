#include <stdio.h>
int main()
{
    int pos=3;
    int n=10;
    int array[]={11,22,33,44,55,66,77,88,99,110};

    int copyArray[pos];
    for(int i=0;i<pos;i++){
        copyArray[i]=array[i];
    }
    int tempPos=pos;
    for(int i=0;i<n;i++){
        array[i]=array[tempPos++];
    }


    int m=n-1;
    int newPos=pos;
    for(int i=newPos-1;i>=0;i--){
        array[m]=copyArray[i];
        m--;
    }


    for(int i=0;i<n;i++){
        printf("old array : %d\n",array[i]);
    }
    return 0;
}
