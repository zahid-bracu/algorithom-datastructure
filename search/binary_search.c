
#include <stdio.h>
int binary_search(int arr[],int low , int high, int value){
    if(high>low){
        int mid=low+(high-low)/2;
        if(arr[mid]==value){
            return mid;
        }else if(arr[mid]>value){
            return binary_search(arr,low,mid-1,value);
        }else{
            return binary_search(arr,mid+1,high,value);
        }
    }
}
int main(){

    int size,value,index;
    freopen("file.txt","r",stdin);

    scanf("%d",&size);
    scanf("%d",&value);

    int array[size];

    for(int i=0;i<size;i++){
        scanf("%d",&array[i]);
    }

    index=binary_search(array,0,size-1,value);
    printf("%d",index);
    return 0;
}
