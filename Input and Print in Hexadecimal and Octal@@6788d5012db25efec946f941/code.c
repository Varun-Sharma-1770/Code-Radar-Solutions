#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);
    int y;
    scanf("%d", &y);
    printf("Hexadecimal: 0%X\n", x);
    printf("Octal: 0%o", y);
    return 0;
}