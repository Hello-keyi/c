#include <stdio.h>
#include <math.h>
int main() {
    printf("加法：%d",1+2);
    printf("\n减法：%d",3-2);
    printf("\n乘法：%d",2*3);
    printf("\n除法：%d",4/2);

    int a = 4;
    printf("\n定义：%d",a);

    printf("\n乘方：%.0f",pow(2,a));
    printf("\n开方：%.1f",sqrt(2));

    printf("\n除法：%.3f",10.0/3.0);
    return 0;
}