#include <stdio.h>
int main(){
    int x;
    scanf("%d", &x);
    int y;
    scanf("%d", &y);
    char ch;
    scanf("%c", &ch);
    int result;
    if(ch == '+'){
        result = x+y;
        printf("%d", result);
    }
    else if(ch == '-'){
        result = x-y;
        printf("%d", result);
    }
    else if(ch == '*'){
        result = x*y;
        printf("%d", result);
    }
    else if(ch == '/'){
        result = x/y;
        printf("%d", result);
    }
    else{
        printf("error");
    }
    return 0;
}