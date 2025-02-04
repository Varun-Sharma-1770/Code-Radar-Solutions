#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for(i=n; i<=0;i--){
        for(j=0;j>=i-1;j++){
            print("*");
        }
    }
    return 0;
}