#include<stdio.h>
int main(){
    int x;
    scanf("%d", &x);
    int y;
    scanf("%d", &y);
    if(x>=18 && y==1){
        printf("Eligible");
    }
    else if(x>18 && y==0){
        printf("Not Eligible");
    }
    else{
        printf("Not Eligible");
    }
    return 0;
}