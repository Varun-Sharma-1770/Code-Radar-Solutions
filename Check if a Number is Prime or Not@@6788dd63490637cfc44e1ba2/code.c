#include <stdio.h>
int main(){
    int x;
    scanf("%d", &x);
    for(int i=2;i<x;i++){
        if(x%i ==0){
            printf("Not Prime");
            return 0;
        }
        else{
            printf("Prime");
            return 0;
        }
    }
    return 0;
}