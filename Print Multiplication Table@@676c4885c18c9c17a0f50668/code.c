#include<stdio.h>
int main(){
    int x;
    scanf("%d", &x);
    for(int i=1;i<=10;i++){
        int z=x*i;
        printf("%d x %d = %d\n", x,i,z);
    }
    return 0;
}