/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enikole <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 12:15:02 by enikole           #+#    #+#             */
/*   Updated: 2019/06/03 19:42:15 by enikole          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "includes/libft.h"

void		*ft_memalloc(size_t size)
{
	void	*s;
	size_t	i;

	i = 0;
	if (!size)
		return (NULL);
	if ((s = (void*)malloc(sizeof(void) * (size))) != NULL)
		ft_bzero(s, size);
	return (s);
}
