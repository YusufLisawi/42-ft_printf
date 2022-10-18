/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelaissa <yelaissa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:45:19 by yelaissa          #+#    #+#             */
/*   Updated: 2022/10/18 19:04:39 by yelaissa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

# include <unistd.h>
# include "../libft/libft.h"

int	ft_putstr(char *str);
int	ft_putchar(char c);
int	ft_putnbr(int nb);
int	ft_putnbr_base(long long unsigned n, char *base);
int	ft_basenblen(unsigned long long nb, char *base);
int	ft_put_itoa(int n);
int ft_put_uitoa(int n);
int ft_put_ntoh(int n, char format);
int ft_put_ntop(long long unsigned int n);

#endif