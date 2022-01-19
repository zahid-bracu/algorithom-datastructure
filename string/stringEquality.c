
//Check Whether two string values are equal or not
#include <stdio.h>
int main()
{
    char stringOne[100]="creepy";
    char stringTwo[100]="creepy";


    int countOne=0;
    for(int i=0;stringOne[i]!='\0';i++){
        countOne++;
    }

    int countTwo=0;
    for(int i=0;stringTwo[i]!='\0';i++){
        countTwo++;
    }

    int x=1;
    if(countOne==countTwo){
        for(int i=0;i<countOne;i++){
            if(stringOne[i]!=stringTwo[i]){
                    x=0;
            }
        }
    }else{
        x=0;
    }

    if(x==0){
        printf("Not Equal");
    }else{
        printf("Equal");
    }




    return 0;
}

