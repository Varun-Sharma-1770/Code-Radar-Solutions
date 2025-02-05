#include<stdio.h>
int main(){
    int x;
    scanf("%d", &x);
    for(int i=0;i<=x;i++){
        for(int j=0;j<=i-1;j++){
            int num=j+1;
            char sum = num +'A'-1;
            printf("%c", sum);
        }
        printf("\n");
    }
    return 0;
}