#include <stdio.h>
int main(){
    char ch;
    scanf("%c", &ch);
    if('A'<= ch && ch<='Z'){
        printf("Uppercase");
    }
    else if('a'<=ch && c<='z'){
        printf("Lowercase");
    }
    return 0;
}