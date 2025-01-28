#include <stdio.h>
int main() {
    char c[100];
    scanf("%s", &c);
    int x;
    scanf("%d", &x);
    char y;
    scanf("%s", &y);
    printf("Name: %s \n Age: %d \n Hobby: %s", c, x, y);
    return 0;
}