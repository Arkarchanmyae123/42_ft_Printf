#include "ft_printf.h"

// int ft_putnbr(int n)
// {
//     long long t;
//     int cnt;

//     cnt = 0;
//     t = n;
//     if (t < 0)
//     {
//         t *= -1;
//         putchar('-');
//     }
//     if (t > 9)
//     {
//         ft_putnbr(t / 10);
//         putchar(t % 10 + '0');
//     }
//     else
//         putchar(t + '0');
//     return (cnt);

// }

int	print_int(long n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
		count++;
	}
	if (n > 9)
	{
		count += print_int(n / 10);
	}
	ft_putchar(n % 10 + '0');
	count++;
	return (count);
}

int	print_unsigned(unsigned int n)
{
	int	count;

	count = 0;
	if (n > 9)
	{
		count += print_unsigned(n / 10);
	}
	ft_putchar(n % 10 + '0');
	count++;
	return (count);
}

int	print_hex(unsigned int n, int uppercase)
{
	int		count;
	char	*base;

	count = 0;
	if (uppercase)
	{
		base = "0123456789ABCDEF";
	}
	else
		base = "0123456789abcdef";
	if (n >= 16)
	{
		count += print_hex(n / 16, uppercase);
	}
	ft_putchar(base[n % 16]);
	count++;
	return (count);
}
