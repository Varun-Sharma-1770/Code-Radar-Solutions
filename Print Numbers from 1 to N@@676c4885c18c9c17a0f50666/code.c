#include<stdio.h>
int main(){
    int x;
    scanf("%d", &x);
    for(int i=0;i<=x-1;i++){
        printf("%d ", i+1);
    }
    return 0;
}