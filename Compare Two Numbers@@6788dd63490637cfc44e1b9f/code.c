#include <stdio.h>
int main(){
    int x;
    scanf("%d", &x);
    int y;
    scanf("%d", &y);
    if(x>y){
        printf("First");
    }
    else if(x==y){
        printf("Equal");
    }
    else{
        printf("Second");
    }
    return 0;
}