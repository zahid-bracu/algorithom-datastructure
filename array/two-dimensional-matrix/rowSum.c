#include <stdio.h>
int main() {
   int row,col,i,j;
   freopen("rowsum.txt","r",stdin);
   scanf("%d",&row);
   scanf("%d",&col);
   int array[row][col];
   int rowArray[row];
   //taking input in the array
   for(i=0;i<row;i++){
    for(j=0;j<col;j++){
        scanf("%d",&array[i][j]);
    }
   }



   for(i=0;i<row;i++){
    int rowSum=0;
    for(j=0;j<col;j++){
        printf("%d ",array[i][j]);
        rowSum=rowSum+array[i][j];
        rowArray[i]=rowSum;
    }
    printf("\n");
   }

   printf("Row Sume Serial : ");
   for(i=0;i<row;i++){
    printf("%d ",rowArray[i]);
   }

}
