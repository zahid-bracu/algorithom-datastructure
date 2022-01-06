//Given an array of integers, and a number
//‘sum’, find the number of pairs of integers in the array whose sum is equal to ‘sum
#include <stdio.h>
int main()
{
    int array[] = { 3,1, 5, 7, -1, 5,4,2 ,3};
    int n = sizeof(array) / sizeof(array[0]);
    int sum = 6;
    int count = 0;
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (array[i] + array[j] == sum){
                printf("{%d:%d}\n",array[i],array[j]);
                count++;
            }


    printf("Total Count : %d",count);
    return 0;
}
