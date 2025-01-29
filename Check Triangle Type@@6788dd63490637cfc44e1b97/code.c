#include<stdio.h>
int main(){
    int x;
    scanf("%d", &x);
    int y;
    scanf("%d", &y);
    int z;
    scanf("%d", &z);
    if(x==y==z){
        printf("Equilateral");
    }
    else if(x!=y!=z){
        printf("Scalene");
    }
    else{
        printf("Isosceles");
    }
    return 0;
}