#include<stdio.h>
int main(){
    int x;
    scanf("%d", &x);
    for(int i=x-1;i>=0;i--){
        for(int j=0;j<=i;j++){
            printf("%d ", j+1);
        }
        printf("\n");
    }
    return 0;
}