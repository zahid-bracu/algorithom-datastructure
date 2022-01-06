#include <stdio.h>
int main() {
   int row;
   int col;
   freopen("waveData.txt","r",stdin);
   scanf("%d",&row);
   scanf("%d",&col);
   int array[row][col];
   for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf(" %d ",&array[i][j]);
        }
   }

   //main matrix
   for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf(" %d ",array[i][j]);
        }
        printf("\n");
   }

   printf("after:\n");
   for(int i=col-1;i>=0;i--){
    if(i%2==0){
        for(int j=row-1;j>=0;j--){
            printf(" %d ",array[j][i]);
        }
    }else{
       for(int j=0;j<row;j++){
            //printf("%d%d ",j,i);
            printf(" %d ",array[j][i]);
        }
    }

   }

   return 0;
}
