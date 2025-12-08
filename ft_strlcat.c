/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thtay <thtay@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 16:15:28 by thtay             #+#    #+#             */
/*   Updated: 2025/11/19 16:15:30 by thtay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// v[3] you don't need to fafo atoi
// por favor
//

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	total;

	total = 0;
	if (size == 0)
		return (size);
	while (*dst && (size - 1) > total)
	{
		dst++;
		total++;
	}
	if (*dst != '\0')
		return (size);
	while (*src && (size - 1) > total)
	{
		*dst = *src;
		src++;
		dst++;
		total++;
	}
	*dst = '\0';
	return (total);
}
