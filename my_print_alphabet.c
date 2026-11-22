#include <unistd.h>

void my_print_alphabet(void)
{
	char	letter = 'a';
	while (letter <= 'z')
	{
		write(1, &letter, 1);
		letter++;
	}
	write(1, &"\n", 1);
}