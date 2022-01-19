// concatenate two string
#include <stdio.h>
int main()
{
    char stringValue[100]="My Name is Zahid";
    int vowelCount=0;
    int consonantCount=0;
    for(int i=0;stringValue[i]!='\0';i++){
        if(stringValue[i]=='a' || stringValue[i]=='e' || stringValue[i]=='i' || stringValue[i]=='o' || stringValue[i]=='u'){
            vowelCount++;
        }else{
            consonantCount++;
        }
    }
    printf("Vowel Count : %d \n",vowelCount);
    printf("Consonant Count : %d \n",consonantCount);
    return 0;
}
