#include<stdio.h>
int main(){
    int x;
    scanf("%d", &x);
    for(int i=1;i<=x;i++){
        for(int j=1;j<=x-i;j++){
            printf(" ");
        }
        for(int j=1;j<=2*i-1;j++){
            printf("*");
        }
        for(int j=x-1;j>=0;j--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}