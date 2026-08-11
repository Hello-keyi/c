#include <stdio.h>
int main() {
    int a;
    printf("please input an integer:\n");
    scanf("%d",&a);
    if (a == 0) {
        printf("it is zero");
    }
    else if (a < 0) {
        printf("it is negative");
    }
    else {
        printf("it is positive");
    }
    return 0;
}