#include "ft_printf.h"

int	printchar(int c)
{
	ft_putchar(c);
	return (1);
}

int	printstr(const char *str)
{
	int	cnt;

	cnt = 0;
	if (!str)
	{
		str = "(null)";
	}
	while (*str)
	{
		ft_putchar(*str++);
		cnt++;
	}
	return (cnt);
}
