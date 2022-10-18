/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelaissa <yelaissa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 17:27:58 by yelaissa          #+#    #+#             */
/*   Updated: 2022/10/18 19:04:55 by yelaissa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"
// number to hexadecimal
int ft_put_ntoh(int n, char format)
{
	char			*base;
	int				size;
	unsigned int	nb;

	size = 0;
	nb = (unsigned int)n;
	base = "0123456789abcdef";
	if (format == 'X')
		base = "0123456789ABCDEF";
	size += ft_putnbr_base(nb, base);
	return (size);
}
// number to pointer
int ft_put_ntop(long long unsigned int n)
{
	char	*base;
	int		size;

	size = 0;
	base = "0123456789abcdef";
	size += ft_putnbr_base(n, base);
	return (size);
}
