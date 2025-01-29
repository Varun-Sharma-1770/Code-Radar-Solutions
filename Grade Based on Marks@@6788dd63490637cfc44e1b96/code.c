#include<stdio.h>
int main(){
    int x;
    scanf("%d", &x);
    if(x>=90){
        printf("A");
    }
    else if(80<=x<90){
        printf("B");
    }
    else if(70<=x<80){
        printf("C");
    }
    elseif(60<=x<70){
        printf("D");
    }
    else{
        printf("f");
    }
    return 0;
}