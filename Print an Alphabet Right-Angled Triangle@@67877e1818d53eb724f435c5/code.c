#include<stdio.h>
int main(){
    int x;
    scanf("%d", &x);
    for(int i=0;i<=x;i++){
        for(int j=0;j<=i-1;j--){
            int sum = j+1;
            char ch = j+'A';
            printf("%c",ch);
        }
        printf("\n");
    }
    return 0;
}