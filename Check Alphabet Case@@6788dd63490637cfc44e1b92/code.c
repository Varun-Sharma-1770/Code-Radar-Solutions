#include <stdio.h>
#include <ctype.h>
int main(){
    char ch;
    scanf("%c", &ch);
    if((isuper(ch))){
        printf("Uppercase");
    }
    else if(ilower(ch)){
        printf("Lowercase");
    }
    return 0;
}