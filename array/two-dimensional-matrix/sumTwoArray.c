#include <stdio.h>
int main() {
   int row;
   int col;
   freopen("sum.txt","r",stdin);
   scanf("%d",&row);
   scanf("%d",&col);
   int array[row][col];
   int arrayTwo[row][col];
   int sumArray[row][col];


   for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&array[i][j]);
        }
   }

   for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&arrayTwo[i][j]);
        }
   }



   printf("The first Array \n");
   for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d ",array[i][j]);
        }
        printf("\n");
   }


   printf("The second Array \n");
   for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d ",arrayTwo[i][j]);
        }
        printf("\n");
   }


   //doing sum
   for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            sumArray[i][j]=array[i][j]+arrayTwo[i][j];
        }
   }


   printf("The Sum Array \n");
   for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d ",sumArray[i][j]);
        }
        printf("\n");
   }




   return 0;
}
