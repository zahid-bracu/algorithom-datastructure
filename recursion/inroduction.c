#include <stdio.h>
void loop(int v,int s){
    if(v<=s){
        printf("%d\n",v);
        loop(v+1,s);
    }
}

int main()
{
   int n=1;
   int e=10;
   loop(n,e);
   return 0;
}
