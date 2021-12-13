/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putposnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-moha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 11:23:34 by iel-moha          #+#    #+#             */
/*   Updated: 2021/12/13 11:04:26 by iel-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	len_p(unsigned int nb)
{
	int	i;

	i = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		i++;
		nb *= -1;
	}
	while (nb > 0)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

int	ft_putposnbr(unsigned int n)
{
	int	i;

	i = len_p(n);
	if (n >= 10)
	{
		ft_putposnbr(n / 10);
		ft_putchar(n % 10 + 48);
	}
	else if (n < 10)
	{
		ft_putchar(n + 48);
	}
	return (i);
}
/*#include <stdio.h>
int main()
{
	int	i;
	i = ft_putposnbr(-1);
	printf("\n%d", i);
}*/
/*int main()
{
	unsigned int i;
	int c;

	i = -1000;

	c = printf("%u\n", i);
	printf("%d\n",c);
}*/
