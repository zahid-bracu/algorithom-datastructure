
#include <stdio.h>
int main(){
    int flag=0;
    int size,value,index;
    freopen("file.txt","r",stdin);

    scanf("%d",&size);
    scanf("%d",&value);

    int array[size];

    for(int i=0;i<size;i++){
        scanf("%d",&array[i]);
    }


    for(int i=0;i<size;i++){
        if(value==array[i]){
                flag=1;
                index=i;
                break;
        }
    }

    if(flag==1){
        printf("The Value has been found at Position : %d",index);
    }else{
        printf("The Value has not been found");
    }

    return 0;
}
