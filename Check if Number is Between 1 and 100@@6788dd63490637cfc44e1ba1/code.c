#include<stdio.h>
int main(){
    int x;
    scanf("%d", &x);
    if(0<x<101){
        printf("In Range");
    }
    else{
        printf("Out of Range");
    }
    return 0;
}