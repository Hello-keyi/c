#include <stdio.h>

void try_change(int x) {
    x = 5;
}

void try_change_ptr(int *x) {
    *x = 5;
}

int main() {
    int a = 10;
    printf("Before try_change: %d\n", a);
    try_change(a);
    printf("After try_change: %d\n", a);

    printf("Before try_change_ptr: %d\n", a);
    try_change_ptr(&a);
    printf("After try_change_ptr: %d\n", a);

    return 0;
}