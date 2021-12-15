#include <stdio.h>
int main()
{
    int numOne,numTwo,numThree;
    printf("Enter the first Number \n");
    scanf("%d",&numOne);
    
    printf("Enter the Second Number \n");
    scanf("%d",&numTwo);
    
    printf("Enter the third Number \n");
    scanf("%d",&numThree);
    
    int max=numOne;
    
    if(numTwo>max){
        max=numTwo;
    }
    if(numThree>max){
        max=numThree;
    }
    printf("Max number : %d \n",max);
    

    return 0;
}
