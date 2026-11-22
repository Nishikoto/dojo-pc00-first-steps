#include <unistd.h>

void my_print_digits(void)
{
    int digit = '0';
    while (digit <= '9')
    {
        write(1, &digit, 1);
        digit++;
        if (digit <= '9')
            write(1, &"-", 1);
    }
    write(1, &"\n", 1);
}