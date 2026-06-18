#include "ft_printf.h"

// int ft_printf(const char *format, ...)
// {
//     va_list args;
//     int total;
//     const char *p;

//     p = format;
//     total = 0;
//     va_start(args, format);
//     while(*p)
//     {
//         if (*p == '%')
//         {
//             p++;
//             if (*p == 'c')
//                 total += printchar(va_arg(args, int));
//             else if (*p == 's')
//                 total += printstr(va_arg(args, const char *));
//             else if (*p == 'd' || *p == 'i')
//                 total += print_int(va_arg(args, int));
//             else if (*p == 'u')
//                 total += print_unsigned(va_arg(args, unsigned int));
//             else if (*p == 'x')
//                 total += print_hex(va_arg(args, unsigned int), 0);
//             else if (*p == 'X')
//                 total += print_hex(va_arg(args, unsigned int), 1);
//             else if (*p == 'p')
//                 total += print_pointer(va_arg(args, void *));
//             else if (*p == '%')
//                 total += printchar('%');
//         }
//         else
//             total += printchar(*p);
//         p++;
//     }
//     va_end(args);
//     return total;

// }

// int	ft_printf(const char *format, ...)
// {
// 	va_list		args;
// 	int			total;
// 	const char	*p;

// 	p = format;
// 	total = 0;
// 	va_start(args, format);
// 	while(*p)
// 	{
// 		if (*p == '%')
// 		{
// 			p++;
// 			total += (*p == 'c') ? printchar(va_arg(args, int)) :
// 				(*p == 's') ? printstr(va_arg(args, const char *)) :
// 				(*p == 'd' || *p == 'i') ? print_int(va_arg(args, int)) :
// 				(*p == 'u') ? print_unsigned(va_arg(args, unsigned int)) :
// 				(*p == 'x') ? print_hex(va_arg(args, unsigned int),0) :
// 				(*p == 'X') ? print_hex(va_arg(args, unsigned int),1) :
// 				(*p == 'p') ? print_pointer(va_arg(args, void *)) :
// 				(*p == '%') ? printchar('%') : 0;
// 		}
// 		else
// 			total += printchar(*p);
// 		p++;
// 	}
// 	va_end(args);
// 	return total;
// }

#include "ft_printf.h"

static int	handle_format(char c, va_list args)
{
	int	count;

	count = 0;
	if (c == 'c')
		count += printchar(va_arg(args, int));
	else if (c == 's')
		count += printstr(va_arg(args, const char *));
	else if (c == 'd' || c == 'i')
		count += print_int(va_arg(args, int));
	else if (c == 'u')
		count += print_unsigned(va_arg(args, unsigned int));
	else if (c == 'x')
		count += print_hex(va_arg(args, unsigned int), 0);
	else if (c == 'X')
		count += print_hex(va_arg(args, unsigned int), 1);
	else if (c == 'p')
		count += print_pointer(va_arg(args, void *));
	else if (c == '%')
		count += printchar('%');
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list		args;
	int			total;

	total = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
			total += handle_format(*(++format), args);
		else
			total += printchar(*format);
		format++;
	}
	va_end(args);
	return (total);
}

// int main() {
//     int a = -12;
//     unsigned int u = 140;
//     void *ptr = &a;

//     ft_printf("Char: %c\n", 'A');
//     ft_printf("String: %s\n", "Hello");
//     ft_printf("Decimal: %d\n", a);
//     ft_printf("Decimal %i\n",a);
//     ft_printf("Unsigned: %u\n", u);
//     ft_printf("Hex lowercase: %x\n", u);
//     ft_printf("Hex uppercase: %X\n", u);
//     ft_printf("Pointer: %p\n", ptr);
//     ft_printf("Percent: %%\n");
//     return 0;
// }
