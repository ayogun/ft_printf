/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayogun <ayogun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 18:58:39 by ayogun            #+#    #+#             */
/*   Updated: 2022/04/03 18:58:40 by ayogun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*s3;
	unsigned int	i;
	unsigned int	j;

	if (!s1 || !s2)
		return (0);
	s3 = (char *)malloc(sizeof(*s3) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!s3)
		return (0);
	i = 0;
	j = 0;
	while (s1[i] != 0)
	{
		s3[i] = s1[i];
		i++;
	}
	while (s2[j] != 0)
	{
		s3[i] = s2[j];
		i++;
		j++;
	}
	s3[i] = 0;
	return (s3);
}
