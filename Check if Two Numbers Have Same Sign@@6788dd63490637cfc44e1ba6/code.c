#include<stdio.h>
int main(){
    int x;
    scanf("%d", &x);
    int y;
    scanf("%d", &y);
    if(x>=0 && y<0 || y>=0 && x<0){
        printf("Different Sign");
    }
    else{
        printf("Same Sign");
    }
    return 0;
}