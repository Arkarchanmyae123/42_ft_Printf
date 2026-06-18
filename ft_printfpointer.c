#include "ft_printf.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	d = dest;
	s = src;
	if (d == NULL && s == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

int	print_pointer(void *p)
{
	unsigned long	addr;
	int				count;
	char			hex_digits[16];
	int				i;
	char			buffer[32];

	i = 0;
	addr = (unsigned long)p;
	ft_memcpy(hex_digits, "0123456789abcdef", 16);
	count = 0;
	if (addr == 0)
		return (count + printstr("(nil)"));
	count += printstr("0x");
	while (addr)
	{
		buffer[i++] = hex_digits[addr % 16];
		addr /= 16;
	}
	while (i--)
		count += printchar(buffer[i]);
	return (count);
}
