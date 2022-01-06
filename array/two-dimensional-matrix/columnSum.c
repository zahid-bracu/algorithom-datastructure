
#include <stdio.h>
int main() {
   int row,col,i,j;
   freopen("rowsum.txt","r",stdin);
   scanf("%d",&row);
   scanf("%d",&col);
   int array[row][col];
   int colArray[col];
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
    }
    printf("\n");
   }


   for(i=0;i<col;i++){
    int colSum=0;
    for(j=0;j<row;j++){

        colSum=colSum+array[j][i];
        colArray[i]=colSum;
    }
    printf("\n");
   }

   printf("Col Sum Serial : ");
   for(i=0;i<col;i++){
    printf("%d ",colArray[i]);
   }

}
