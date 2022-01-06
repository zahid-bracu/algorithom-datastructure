#include <stdio.h>
int main() {
   int size;
   freopen("file.txt","r",stdin);
   scanf("%d",&size);

   int array[size];

   for(int i=0;i<size;i++){
        scanf("%d",&array[i]);
   }

   for(int i=0;i<size;i++){
        printf("%d\n",array[i]);
   }
   return 0;
}
