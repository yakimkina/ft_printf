/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enikole <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 16:29:13 by enikole           #+#    #+#             */
/*   Updated: 2019/06/10 17:27:37 by enikole          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void					*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned	char	*d;
	unsigned	char	*s;

	d = (unsigned char*)dst;
	s = (unsigned char*)src;
	if (!dst && !src)
		return (NULL);
	while (n--)
		d[n] = s[n];
	return ((void*)dst);
}
