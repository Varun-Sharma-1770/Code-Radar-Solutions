#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);
    int y;
    scanf("%d", &y);
    if(x<0 && y<0){
        printf("True");
    }
    else{
        printf("False");
    }
    return 0;
}