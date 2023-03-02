#include<stdio.h>
int main (){
    int a,b,c;
    for(a=1;a<=5;a++)
    {
        for(b=a;b>=1;b--)
        {
            if(b%2!=0)
            {
                printf("- ");
            }
            else
            {
                printf("| ");
            }
        }
        printf("\n");
    }
    return 0;
}