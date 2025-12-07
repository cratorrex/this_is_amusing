/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thtay <thtay@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 11:41:13 by thtay             #+#    #+#             */
/*   Updated: 2025/11/19 11:41:15 by thtay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// find the last occurrence of 'c' in 's' and return the *pointer
// stdio.h >> NULL
//

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				n;
	int				len;
	unsigned char	*ret;

	n = 0;
	len = 0;
	ret = (unsigned char *)s;
	while (*ret != '\0')
	{
		if (*ret == (unsigned char)c)
			n = 0;
		ret++;
		n++;
		len++;
	}
	while (n > 0 && n != len)
	{
		ret--;
		n--;
	}
	if (*ret == '\0' && c != '\0')
		return (NULL);
	return ((char *)ret);
}
