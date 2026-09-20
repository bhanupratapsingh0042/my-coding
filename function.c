#include <stdio.h>

int sum(int a, int b) {
    int result = a + b;
    return result;
}


int main() {
    int x = 45 ;
    int y = 60;
    int output;

    output = sum(x, y);
    printf("The addition of %d and %d using function is: %d\n", x, y, output);

    return 0;
}