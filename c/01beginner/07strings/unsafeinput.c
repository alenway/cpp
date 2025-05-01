#include <stdio.h>

int main(){
    char name[10];
    gets(name);    // Dangerous. No length check.
    // scanf("%s", name); // Also dangerous if no size limit given.
    return 0;
}
