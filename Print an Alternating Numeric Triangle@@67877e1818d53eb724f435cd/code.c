#include<stdio.h>
int main(){
    int x;
    scanf("%d", &x);
    for(int i=0;i<=x-1;i++){
        for(int j=0;j<=i;j++){
            printf("%d ", j);
        }
        for(int j=0;j<=2*i;j++){
            printf("%d ", 1);
        }        
        printf("\n");
    }
    return 0;
}