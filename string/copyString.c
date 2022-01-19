
//Copy one string to another string
#include <stdio.h>
int main()
{
    char stringOne[100]="Spooky";
    char stringTwo[100]="creepy";

    for(int i=0;stringTwo[i]!='\0';i++){
        stringOne[i]=stringTwo[i];
    }

    printf("%s \n",stringOne);
    printf("%s \n",stringTwo);
    return 0;
}
