#include <stdio.h>
int main()
{
    for(int i=1;i<=3;i++)
    {
        for(int j=1;j<=3;j++)
        {
            if(i==1||j==3||i==3)
            printf(" *");
        }
        printf("\n");
    }
    for(int k=1;k<=3;k++)
    {
        for(int p=1;p<=3;p++)
        {
            if(k==3||p==3)
            printf(" *");
             else
                printf("  ");
        }
        printf("\n");
    }
    printf("\n");

   for(int i=1;i<=3;i++)
   {
           printf(" *\n");
   }
   printf("\n");

    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            if(j==1||i==j||i==1)
            printf(" *");
            else
            printf("  ");
        }
        printf("\n");
    }
    printf("\n");
     for(int i=1;i<=3;i++)
   {
           printf(" *\n");
   }
   printf("\n");
    return 0;
}
