#include <unistd.h>

void my_print_alphabet_reverse(void)
{
	char	letter = 'Z';
	while (letter >= 'A')
	{
		write(1, &letter, 1);
		letter--;
	}
	write(1, &"\n", 1);
}