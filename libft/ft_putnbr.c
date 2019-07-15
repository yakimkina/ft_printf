/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enikole <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 15:25:09 by enikole           #+#    #+#             */
/*   Updated: 2019/04/07 18:36:18 by enikole          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void		ft_putnbr(int n)
{
	int		fl;

	fl = 1;
	if (n < 0)
	{
		ft_putchar('-');
		fl = -1;
	}
	if ((n / 10) != 0)
		ft_putnbr((n / 10) * fl);
	ft_putchar((n % 10) * fl + 48);
}