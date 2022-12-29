#include<stdio.h>
int main()
{

    int ara[100],n,i;
    printf("enter one numbers: ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {

        scanf("%d",&ara[i]);
    }
    for(i=0; i<1; i++)
    {
        if(i%17==0)
        {
            printf("1");
        }
        else
            printf("0");
    }

    return 0;


}
