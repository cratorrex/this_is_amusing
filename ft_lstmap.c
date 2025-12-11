/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thtay <thtay@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 17:25:40 by thtay             #+#    #+#             */
/*   Updated: 2025/12/05 17:25:41 by thtay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//malloc, free

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ret;
	t_list	*ter;

	ret = NULL;
	ter = ret;
	while (lst)
	{
		if (f && lst -> content)
		{
			ft_lstadd_back(&ret, ft_lstnew(f(lst -> content)));
		}
		else
			break ;
		lst = lst -> next;
	}
	if (lst == NULL)
		return (ret);
	ft_lstclear(&ter, del);
	return (NULL);
}
