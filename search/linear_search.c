
#include <stdio.h>

int linear_search(int array[],int value, int size){
    for(int i=0;i<size;i++){
        if(value==array[i]){
                return i;
        }
    }
    return -1;
}
int main(){
    int flag=0;
    int size,value,index;
    freopen("file.txt","r",stdin);
    scanf("%d",&size);
    scanf("%d",&value);
    int array[size];
    for(int i=0;i<size;i++){
        scanf("%d",&array[i]);
    }
    index=linear_search(array,value,size);
    if(index>=0){
        printf("The Value has been found at position %d\n",index);
    }else{
        printf("The Value has not been found");
    }
    return 0;
}
