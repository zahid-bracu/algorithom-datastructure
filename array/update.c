//delete an element from a specific index
#include <stdio.h>
int main()
{
    int pos=2;
    int n=6;
    int array[6]={11,22,31,44,55,66};
    array[2]=33;
    
    for(int i=0;i<n;i++){
        printf("%d\n",array[i]);
    }

    return 0;
}
