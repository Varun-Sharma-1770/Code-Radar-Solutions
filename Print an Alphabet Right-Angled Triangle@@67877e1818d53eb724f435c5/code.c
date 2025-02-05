#include<stdio.h>
int main(){
    int x;
    scanf("%d", &x);
    for(int i=1;i<=x;i++){
        for(int j=1;j<=i-1;j++){
            int sum = j+1;
            char ch = sum+'A'-1;
            printf("%c ",ch);
        }
        printf("\n");
    }
    return 0;
}
