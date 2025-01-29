#include <stdio.h>
int main(){
    int x;
    scanf("%d", &x);
    int y;
    scanf("%d", &y);
    if(x<y){
        printf("Profit");
    }
    else if(x>y){
        printf("Loss");
    }
    else{
        printf("No Profit No Loss");
    }
    return 0;
}