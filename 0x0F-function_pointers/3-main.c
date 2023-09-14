#include "3-calc.h"

/**
 * 
*/
int main(int argc, char *argv[]) {
    int result = 0;

    if (argc > 1) {
        result = calc(argv[1]);
    } else {
        result = 0;
    }

    printf("%d\n", result);

    return 0;
}
