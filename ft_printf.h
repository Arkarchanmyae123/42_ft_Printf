#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	printchar(int c);
int	printstr(const char *str);
int	print_int(long n);
int	print_unsigned(unsigned int n);
int	print_hex(unsigned int n, int uppercase);
int	print_pointer(void *p);
int	ft_putchar(char c);
#endif
