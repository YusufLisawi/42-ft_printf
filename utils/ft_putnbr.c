/* ************************************************************************** */
/*	                                                                          */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelaissa <yelaissa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 12:46:49 by yelaissa          #+#    #+#             */
/*   Updated: 2022/03/31 14:50:11 by yelaissa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"
#define BASE10 "0123456789"

int ft_put_itoa(int n)
{
	long	nb;
	int		size;

	nb = n;
	size = 0;
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
		size += 1;
	}
	size += ft_putnbr_base(nb, BASE10);
	return (size);
}

int ft_put_uitoa(int n)
{
	unsigned int	nb;
	int				size;

	nb = (unsigned int)n;
	size = 0;
	size += ft_putnbr_base(nb, BASE10);
	return (size);
}
