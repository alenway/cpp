#include <stdio.h>

int main() {
    for (int i = 0; i < 5; i++) {
        if (i == 3) {
            goto end;
        }
        printf("i = %d\n", i);
    }
end:
    printf("Exited the loop.\n");
    return 0;
}
