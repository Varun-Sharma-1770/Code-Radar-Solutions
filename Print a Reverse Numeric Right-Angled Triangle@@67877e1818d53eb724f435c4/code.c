#include<stdio.h>
int main(){
    int x;
    scanf("%d", &x);
    for(int i=0;i<=x-1;i++){
        for(int j=i;j>0;j++){
            printf("%d", j+1);
        }
        printf("\n");
    }
    return 0;
}