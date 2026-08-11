#include <stdio.h>

int main (){
    int age = 25;
    int *p = &age;
    printf("value of age is: %d\n", age);
    printf("address of age is: %p\n", (void*)p);
    printf("value at the address is: %d\n", *p);
    return 0;
}