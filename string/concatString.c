// concatenate two string
#include <stdio.h>
int main()
{
    char stringOne[100]="Spooky";
    char stringTwo[100]="Creepy";
    int countOne=0;
    for(int i=0;stringOne[i]!='\0';i++){
            countOne++;
    }
    int countTwo=0;
    for(int i=0;stringTwo[i]!='\0';i++){
            countTwo++;
    }
    int totalLength=countOne+countTwo;
    char newArray[totalLength];
    for(int i=0;i<countOne;i++){
        newArray[i]=stringOne[i];
    }
    int j=0;
    for(int i=countTwo-1;i<totalLength;i++){
        newArray[i]=stringTwo[j++];
    }
    printf("%s",newArray);
    return 0;
}
