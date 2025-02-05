#include<stdio.h>
int main(){
    int x;
    scanf("%d", &x);
    for(i=1;i<=10;i++){
        int z=x*i;
        printf("%d X %d = %d\n", x,i,z);
    }
    printf("\n");
    return 0;
}