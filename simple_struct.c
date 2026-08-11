#include <stdio.h>
#include <strings.h>

struct person{
    char name[20];
    int age;
};

int main() {
    struct person p1;
    strcpy(p1.name,"tom");
    p1.age = 18;
    printf("name:%s,age:%d",p1.name,p1.age);

    struct person p2;
    strcpy(p2.name,"jerry");
    p2.age = 20;
    printf("\nname:%s,age:%d",p2.name,p2.age);

    struct person *str = &p1;
    printf("\n%s",str -> name);
    printf("\n%d",str -> age);
    str -> age = 20;
    printf("\n%d",str -> age);

    return 0;
}
