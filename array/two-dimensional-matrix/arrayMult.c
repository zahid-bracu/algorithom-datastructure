#include <stdio.h>
int main() {

   int rowOne,rowTwo,colOne,colTwo,i,j;
   freopen("file.txt","r",stdin);
   scanf("%d",&rowOne);
   scanf("%d",&colOne);
   scanf("%d",&rowTwo);
   scanf("%d",&colTwo);
   int arrayOne[rowOne][colOne];
   int arrayTwo[rowTwo][colTwo];
   int multArray[rowOne][rowTwo];

   //taking input in the array
   for(i=0;i<rowOne;i++){
    for(j=0;j<colOne;j++){
        scanf("%d",&arrayOne[i][j]);
    }
   }
   for(i=0;i<rowTwo;i++){
    for(j=0;j<colTwo;j++){
        scanf("%d",&arrayTwo[i][j]);
    }
   }



   //showing the two array value
   for(i=0;i<rowOne;i++){
    for(j=0;j<colOne;j++){
        printf("%d ",arrayOne[i][j]);
    }
    printf("\n");
   }
   for(i=0;i<rowTwo;i++){
    for(j=0;j<colTwo;j++){
        printf("%d ",arrayTwo[i][j]);
    }
    printf("\n");
   }




    //multipy the array value
   for(i=0;i<colTwo;i++){
    for(j=0;j<rowTwo;j++){
        int value=arrayOne[i][j]*arrayTwo[j][i];
        multArray[i][j]=value;
    }

   }

   printf("The Result of the Array Multiplication : \n");
   for(i=0;i<colTwo;i++){
    for(j=0;j<rowTwo;j++){
         printf("%d ",multArray[i][j]);
    }
     printf("\n");
   }
}
