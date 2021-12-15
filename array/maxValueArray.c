#include <stdio.h>
int main(){
    
    int array[10]={12,126,33,453,535,63,77,58,99,110};
    
    int arraySize=sizeof(array)/sizeof(array[0]);
    
    int max=array[0];
    
    for(int i=0;i<arraySize;i++){
        if(array[i]>max)
            max=array[i];
    }
    
    printf("Max Value : %d",max);
}