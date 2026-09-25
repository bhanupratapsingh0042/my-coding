#include <stdio.h>
int main() {
    int age, result;

    printf("apni age dalein");
    scanf("%d", &age);

    result = (age >= 18);

    printf("agar answer 1 hai to licene milega, 0 hai to nahi: %d\n", result);


    return 0;
}