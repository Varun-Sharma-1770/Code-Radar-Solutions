#include<stdio.h>
int main(){
    int x;
    scanf("%d", &x);
    for(int i=1;i<=x;i++){
        for(int j=i-1;j>0;j--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}