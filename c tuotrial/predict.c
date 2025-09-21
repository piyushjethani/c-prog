// 
#include<stdio.h>
int main ()
{
    int x,y;
    printf("enter x   and y");
    scanf("%d%d",&x,&y);
    int temp;
    temp=x;
    x=y;
    y=temp;
    printf("\n %d %d",x,y);
    return 0;

}
