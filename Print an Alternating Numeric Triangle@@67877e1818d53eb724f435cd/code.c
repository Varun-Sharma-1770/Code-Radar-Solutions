#include<stdio.h>
int main(){
    int x;
    scanf("%d", &x);
    for(int i=0;i<=x-1;i++){
        for(int j=0;j<=i;j++){
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}