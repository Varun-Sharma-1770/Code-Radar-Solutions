#include<stdio.h>
int main(){
    int N;
    scanf("%d", &N);
    for(int i=1;i<=N;i++){
        for(int j=1;j<=N-i;j++){
            printf(" ");
        }
        for(int j=1;j<=i-1;j++){
            int z=j;
            char sum = z+'1'-1;
            printf("%c", sum);
        }
        for(int j=i;j<=2*i;j++){
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}