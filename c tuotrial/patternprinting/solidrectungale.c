// #include<stdio.h>
// int main(){
//     int n;
//     printf("ente a number of rows : ");
//     scanf("%d",&n);
//     int m;
//     printf("ente a number of columns : ");
//     scanf("%d",&m);
//     for(int i=1;i<=n;i++){
//         for(int i=1;i<=m;i++){
//             printf("*");
//        }
//         printf("\n");
//     }
//     return 0;

#include<stdio.h>
int main(){
    int n;
    printf("enter no. of rows : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int i=1;i<=n;i++){
            printf("%d",i);
        
        }
        printf("\n");
    }
}