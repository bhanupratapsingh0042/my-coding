#include <stdio.h>
int multiply (int a, int b, int c) {
    int result = (a * b * c);

    return result;
}

int main () {
    int x = 8;
    int y = 50000;
    int z = 7;
    int final_answer;

    final_answer = multiply(x, y, z);
   
    printf("The multiplication of %d , %d and %d using function is: %d\n", x, y, z, final_answer);
    
        return 0;
}
