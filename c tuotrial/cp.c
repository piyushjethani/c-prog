#include<stdio.h>
int main(){
    int cp;
    printf("enter costprice : ");
    scanf("%d",&cp);
    int sp;
    printf("enter selling prise :");
    scanf("%d",&sp);
    if(sp>cp){
        printf("profit");
    }
    if(sp==cp){
        printf("no profile, no loss");
    }
    return 0;
}