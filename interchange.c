#include <stdio.h>

int main() {
    int a, b, temp;
    
    printf("a ki value dalein: ");
    scanf("%d", &a);
    
    printf("b ki value dalein: ");
    scanf("%d", &b);
    
    // जैसे ही आप ये 3 लाइनें लिखेंगे, लाल लाइन गायब हो जाएगी:
    temp = a;
    a = b;
    b = temp;
    
    printf("Adla-badli ke baad:\n");
    printf("a ki nayi value hai: %d\n", a);
    printf("b ki nayi value hai: %d\n", b);
    
    return 0;
}
