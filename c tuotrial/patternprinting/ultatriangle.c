#include<stdio.h>
int main(){
    printf("enter no. of rows : ");
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        for(int j=1;j<=n+1-i;j++){
            printf("*");
        }
    }
4    return 0;

} 