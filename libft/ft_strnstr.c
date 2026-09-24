/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabuhila <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 11:26:24 by mabuhila          #+#    #+#             */
/*   Updated: 2026/09/24 13:32:58 by mabuhila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		i;
	size_t		lit_len;

	i = 0;
	lit_len = ft_strlen(little);
	if (!little[0])
		return ((char *)big);
	while (big[i] != '\0' && (len - i) >= lit_len)
	{
		if (ft_strncmp(&big[i], little, len - i) == 0)
			return ((char *)&big[i]);
		i++;
	}
	return (0);
}
