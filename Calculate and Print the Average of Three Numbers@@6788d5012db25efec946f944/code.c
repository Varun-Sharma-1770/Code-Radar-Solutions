#include <stdio.h>
int main() {
    int x;
    scanf("%d",&x);
    int y;
    scanf("%d",&y);
    int z;
    scanf("%d",&z);
    float a;
    a = (x+y+z)/3;
    printf("Average: %.2f", a);
    return 0;
}