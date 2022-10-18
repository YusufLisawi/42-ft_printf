/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelaissa <yelaissa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:20:40 by yelaissa          #+#    #+#             */
/*   Updated: 2022/10/18 19:28:50 by yelaissa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* int	sum(int num, ...)
{
	size_t	i;
	int		sum;
	va_list	args;

	va_start(args, num);
	i = 0;
	while (i < num)
	{
		sum += va_arg(args, int);
		i++;
	}
	va_end(args);
	return (sum);
} */

/* int	main(void)
{
	// printf("%d\n", sum(5, 1, 2, 3, 4, 5));
	// int a = 112871664;

	// ft_putnbr_base(a, "0123456789abcdef");
	int a = 10;
	int *b = &a;
	printf("%p\n", b);
	printf("%X\n", b);
} */

#include <stdio.h>

// int main(void)
// {
// 	printf("%c \n", 'a');
// 	printf("%s \n", "abc");
// 	printf("%p \n", (void *)42);
// 	printf("%d %i \n", 42, 42);
// 	printf("%u \n", 42);
// 	printf("%x %X \n", 42, 42);
// 	printf("%% \n\n");

// 	ft_printf("%c \n", 'a');
// 	ft_printf("%s \n", "abc");
// 	ft_printf("%p \n", (void *)42);
// 	ft_printf("%d %i \n", 42, 42);
// 	ft_printf("%u \n", 42);
// 	ft_printf("%x %X \n", 42, 42);
// 	ft_printf("%% \n");
// 	return 0;
// }

int main()
{
	int a = 45;
	int j = 0;
	j += ft_printf("string is: %s,\n", "helloo im a string");
	j += ft_printf("persent is : %%,\n");
	j += ft_printf("character is: %c,\n", 'x');
	j += ft_printf("address is: %p,\n", &a);
	j += ft_printf("hex lower is: %x,\n", &a);
	j += ft_printf("hex upper is: %X,\n", &a);
	j += ft_printf("int is: %d,\n", 46512);
	j += ft_printf("hex to des: %i,\n", 0x1c8);
	j += ft_printf("oct to des: %i,\n", 0710);
	j += ft_printf("des to des: %i\n", 456);
	printf("#################################\n");
	printf("\n%d\n", j);
}
