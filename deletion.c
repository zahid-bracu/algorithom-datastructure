#include <stdio.h>
int main(){
    int n;
    int pos;
    int elem;
    int array[100];
    
    printf("Please enter how many element you wish to enter\n");
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
        printf("Please Enter the element No. %d\n",n);
        scanf("%d",&array[i]);
    }
    
    printf("Please enter the position of the index where do you want to delete the number\n");
    scanf("%d",&pos);
    

    for(int i=pos;i<n;i++){
        array[i+1]=array[i];
    }
    array[n-1]=0;
   
    for(int i=0;i<n;i++){
        printf("%d\n",array[i]);
    }
    
}