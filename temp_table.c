#include <stdio.h>

int main() {
    printf("Celsius | Fahrenheit\n");
    for (int c = 0; c <= 100; c += 10) {
        printf("%7d | %10.1f\n", c, c * 9.0 / 5 + 32);
    }
    return 0;
}
