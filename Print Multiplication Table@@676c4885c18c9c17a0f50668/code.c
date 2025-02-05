#include<stdio.h>
int main(){
    int x;
    scanf("%d", &x);
    for(i=1;i<=10;i++){
        int z=x*i+1;
        printf("%d X %d = %d", x,i+1,z);
    }
    printf("\n");
    return 0;
}