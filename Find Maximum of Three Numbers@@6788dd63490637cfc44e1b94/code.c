#include <stdio.h>
int main(){
    int x;
    scanf("%d", &x);
    int y;
    scanf("%d", &y);
    int z;
    scanf("%d", &z);
    if(x>z && x>y){
        printf("%d", x);
    }
    else if(y>x && y>z){
        printf("%d", y);
    }
    else{
        printf("%d", z);
    }
    return 0;
}