#include<stdio.h>
int main (){
    int a,b,c;
    for(a=1;a<=5;a++)
    {
        for(b=1;b<=a;b++)
        {
            if(b%2!=0)
            {
                printf("0 ");
            }
            else
            {
                printf("1 ");
            }
        }
        printf("\n");
    }
    return 0;
}