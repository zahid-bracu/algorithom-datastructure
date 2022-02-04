#include <math.h>
#include <stdio.h>
void insertion_sort(int arr[],int size){
    for(int i=1;i<size;i++){
        int temp=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1]=arr[j];
            j--;
        }
        arr[++j]=temp;
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
    insertion_sort(array,size);
    for(int i=0;i<size;i++){
        printf("%d\n",array[i]);
    }

}
