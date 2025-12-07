/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thtay <thtay@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 18:34:40 by thtay             #+#    #+#             */
/*   Updated: 2025/11/19 18:34:41 by thtay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// is string == string ? yesn't.
//

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] == s2[i] && i < (n - 1) && s1[i] != 0 && s2[i] != 0)
		i++;
	if (n == 0)
		return (0);
	return (s1[i] - s2[i]);
}
