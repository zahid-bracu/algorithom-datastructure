//reverse a string
#include <stdio.h>
int main()
{
    char word[100];
    char reverseString[100];
    printf("Enter your String : \n");
    gets(word);
    int count=0;
    for(int i=0;word[i]!='\0';i++){
            count++;
    }
    int j=0;
    for(int i=count-1;i>=0;i--){
        reverseString[j++]=word[i];
    }

    printf("%s",reverseString);

    return 0;
}
