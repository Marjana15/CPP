#include<stdio.h>

int main(){

    int i;
    while(scanf("%d",&i))
    {
        if(i%17==0){
            printf("1\n");
        }
        else{
            printf("0\n");
        }
    }
    return 0;
}
