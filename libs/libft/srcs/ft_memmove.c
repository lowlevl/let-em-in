/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 16:59:44 by lroux             #+#    #+#             */
/*   Updated: 2019/02/14 04:35:39 by glodi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t initlen;

	if (dst < src)
	{
		initlen = len;
		while (len--)
			((unsigned char*)dst)[initlen - len - 1] = (
				(unsigned char*)src)[initlen - len - 1];
	}
	else
		while (len--)
			((unsigned char*)dst)[len] = ((unsigned char*)src)[len];
	return (dst);
}
