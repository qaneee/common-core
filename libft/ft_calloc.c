/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arvardan <arvardan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 12:29:22 by arvardan          #+#    #+#             */
/*   Updated: 2026/02/03 18:48:55 by arvardan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (size != 0 && count > __SIZE_MAX__ / size)
		return NULL;
	if (count == 0 || size == 0)
	{
		ptr = (void *)malloc(1);
		if (!ptr)
			return (NULL);
		ft_bzero(ptr, 1);
		return (ptr);
	}
	ptr = (void *)malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, (count * size));
	return (ptr);
}
