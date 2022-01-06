#include <stdio.h>

int main(){
    int i, n, sum=0;
    printf("Enter size of the array: ");
    scanf("%d", &n);
    int arr[n];
    for(i=0; i<n; i++){
        printf("Enter the element no. %d \n", i+1);
        scanf("%d", &arr[i]);
    }
    for(i=0; i<n; i++){
        sum = sum + arr[i];
    }
    printf("Sum of all elements of array = %d", sum);
    return 0;
}
