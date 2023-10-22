#include <stdio.h>

int main() {
    char onelove[33] = "COFFEE";
    int x, y;
    for (x = 0; x < 15; x++) {
        for (y = 0; y < 15; y++) {
            printf("%s", onelove);
        } //inner for
        printf("\n");
    } //outer for

    return 0;
}
