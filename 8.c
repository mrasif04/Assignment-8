#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=0;i<=3;i++)
    {
        k=1;
        for(j=0;j<=6;j++)
        {
            if(j>=3-i && j<=3+i)
           {
               if(j<3)
               {
               printf("%d",k);
               k++;
               }
            else
            { 
            printf("%d",k);
            k--;
        }}
        else
        printf(" ");
               
           }
        printf("\n");
    }
}