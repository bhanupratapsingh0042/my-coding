#include <stdio.h>

int main() {
    float iron, gold, phones;
    printf("iron ka weight dalein");
    scanf("%f", &iron);

    printf("gold ka weight dalein");
    scanf("%f", &gold);

    printf("phones ka weight dalein");
    scanf("%f", &phones);

    printf("The average weight is: %.2f\n", (iron + gold + phones) / 3);


    return 0;
    
}