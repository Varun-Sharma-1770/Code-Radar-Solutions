#include<stdio.h>
int main(){
    int x;
    scanf("%d", &x);
    for(int i=x;i>0;i--){
        for(int j=0;j<=i-1;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}