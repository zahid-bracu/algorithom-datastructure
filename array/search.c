#include <stdio.h>
int main(){
    int num;
    int index=-1;
    int array[10]={12,126,33,453,535,63,77,58,99,110};
    int arraySize=sizeof(array)/sizeof(array[0]);
    printf("Enter the number you want to search \n");
    scanf("%d",&num);
    
    for(int i=0;i<arraySize;i++){
        if(array[i]==num)
            index=i;
    }
    
    if(index!=-1){
        printf("Found at position %d",index);
    }else{
        printf("Not Found");
    }
}