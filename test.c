#include <stddef.h>
#include <stdint.h>

int COUNTER;

int get_counter(void) {
    COUNTER++;
    return COUNTER;
}

int main(void) {
    COUNTER = 1;
    return 0;
}
