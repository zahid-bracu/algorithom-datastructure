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
    
    printf("Please enter the position of the index where do you want to put the number\n");
    scanf("%d",&pos);
    
    printf("Please enter the element you want to enter\n");
    scanf("%d",&elem);
    

    for(int i=n-1;i>=pos;i--){
        array[i+1]=array[i];
    }
    array[pos]=elem;
    n++;
    for(int i=0;i<n;i++){
        printf("%d\n",array[i]);
    }
    
}