#include <unistd.h>

void my_print_sign(int n)
{
	if (n == 0)
		write(1, &"0\n", 2);
	else
	{
		if (n < 0)
			write(1, &"-\n", 2);
		else
			write(1, &"+\n", 2);
	}
}