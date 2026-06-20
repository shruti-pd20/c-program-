#include <stdio.h>
int main() {
    int num;
    printf("enter a number:");
    scanf("%d", &num);
    if(num > 0)
    printf("+");
    else if(num < 0)
    printf("-");
    else
    printf("zero");
    return 0;
}