#include <stdio.h>

int main() {
    char name1[] = "tom";
    char *name2 = "tom";
    printf("name1:%s",name1);
    printf("\nname2:%s",name2);

    char *p = name1;
    while(*p != '\0') {
        printf("\n%c", *p);
        p++;
    }
    return 0;

}