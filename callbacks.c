#include "callbacks.h"
#include "types.h"

void digit_function(int digit)
{
    printf("Digit is d=%d", digit);
}

int digit_letter_function(int digit, char letter)
{
    printf("Digit is d=%d and char is c=%c", digit, letter);
    return 0;
}
