#include <math.h>
#include <stdio.h>
void bubble_sort(int array[],int size){
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){

            if(array[i]>array[j]){
                int temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
}

int main(){
    int size;
    freopen("file.txt","r",stdin);
    scanf("%d",&size);
    int array[size];

    for(int i=0;i<size;i++){
        scanf("%d",&array[i]);
    }
    bubble_sort(array,size);
    for(int i=0;i<size;i++){
        printf("%d\n",array[i]);
    }

}
