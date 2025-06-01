#include <stdbool.h>
#include <stdio.h>

int main() {
    const int intValue = 12;
    const float floatValue = 0.2398F;
    const double doubleValue = 3.14159;
    const char characterValue = 'c';
    const bool booleanValue = true;
    const short shortValue = 10;
    const long longLongLongValue = 9223372036854775807LL;
    const long long longLongValue = 9223372036854775807LL;

    const signed int intSignedValue = -12;
    const unsigned int unsignedIntegerValue = 4294967295U;

    const int intAuto = 100;

    printf("%d\n", intValue);
    printf("%i\n", intValue);
    printf("%f\n", floatValue);
    printf("%lf\n", doubleValue);
    printf("%c\n", characterValue);
    printf("%d\n", booleanValue);
    printf("%d\n", shortValue);
    printf("%p\n", (void*)&longLongLongValue);
    printf("%p\n", (void*)&longLongValue);
    printf("%d\n", intSignedValue);
    printf("%u\n", unsignedIntegerValue);
    printf("%d\n", intAuto);

    return 0;
}
