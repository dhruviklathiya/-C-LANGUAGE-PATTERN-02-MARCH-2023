#include<stdio.h>
int main (){
    int a,b,c;
    for(a=5;a>=1;a--)
    {
        for(b=a;b>=1;b--)
        {
            if(b%2!=0)
            {
                printf("1 ");
            }
            else
            {
                printf("0 ");
            }
        }
        printf("\n");
    }
    return 0;
}