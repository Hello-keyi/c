#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct person{
    char name[20];
    int age;
};

int main () {
    struct person *ptr = (struct person*)malloc(sizeof(struct person));
    if (ptr == NULL) {
        printf("\nfall");
        return 1;
    }
    strcpy (ptr -> name , "jerry");
    ptr -> age = 22;
    printf("%s,%d",ptr -> name,ptr -> age);
    return 0;
}

