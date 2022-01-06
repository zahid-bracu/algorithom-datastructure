#include <stdio.h>
int main() {
   int row;
   int col;
   freopen("twodimarray.txt","r",stdin);
   scanf("%d",&row);
   scanf("%d",&col);
   int array[row][col];
   for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&array[i][j]);
        }
   }

   //main matrix
   for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d ",array[i][j]);
        }
        printf("\n");
   }

    //tranpose matrix
   for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            printf("%d ",array[j][i]);
        }
        printf("\n");
   }


   return 0;
}
