#include <unistd.h>

void my_print_alphabet(void)
{
	letter = "a";
	while (letter <= "z")
	{
		write(1, &letter, 1);
	}
}
