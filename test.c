#include <stdio.h>

int main() {
int a = 1;
printf("Int: %d\n", a);

double b = 5.0;
printf("Double: %f\n", b);

char hello[6] = {'h', 'e', 'l', 'l', 'o', '\0'};
printf("%s\n", hello);
printf("hello[4]: %d\n", hello[4]);
printf("hello[15]: %d\n", hello[15]);

unsigned int c = 200;
unsigned int d = -10;
printf("Unsigned Int (200): %u\nUnsigned Int (-10): %u\n", c, d);

short max = 32767;
short out = max + 1;
printf("Max: %d\n", max);
printf("Max + 1: %d\n", out);

return 0;
}
