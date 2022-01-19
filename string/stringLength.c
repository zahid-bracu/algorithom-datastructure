
//find the length of a string
#include <stdio.h>
int main()
{
    char word[100];
    printf("Enter your String : \n");
    gets(word);
    int count=0;
    for(int i=0;word[i]!='\0';i++){
            count++;
    }

    printf("The String Length is %d \n",count);
    return 0;
}
