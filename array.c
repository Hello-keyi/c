#include <stdio.h>

int main(){
    int arr[4] = {1,2,3,4};
    printf("second element of the array is: %d\n", arr[2]);

    int sum = 0;
    for(int i = 0; i < 4; i ++){
        sum += arr[i];
        printf("sum of the array elements is: %d\n", sum);
    }
    return 0;
}