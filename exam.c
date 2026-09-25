#include <stdio.h>
int main(){
    int admitcard, fees, result;
    
    printf("kya admitcard hai?(yes ke liye 1, no ke liye 0");
    scanf("%d", &admitcard);

    printf("kya fees jama hai?(yes ke liye 1, no ke liye 0");
    scanf("%d", &fees);


    result = (admitcard == 1 && fees == 1);
    
    printf("agar answer 1 hai to exam de sakte ho, 0 hai to nahi: %d\n", result);

    return 0;
}