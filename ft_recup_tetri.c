/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recup_tetri.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 20:04:20 by atrang            #+#    #+#             */
/*   Updated: 2015/12/11 12:55:07 by atrang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_check(char *s)  //ENLEVE LES '.' AU DEBUT ET A LA FIN DE LA STRING
{
	char	*s1;
	int		i;
	int		j;

	i = 0;
	while (s[i] == '.')
		i++;
	s1 = (char*)malloc(sizeof(char) * ft_strlen(s));
	j = ft_strlen(s) - 1;
	while (s[j] == '.')
		j--;
	s1 = (ft_strsub(s, i, (j - i) + 1));
	return (s1);
}

long		ft_recup_tetri(char *s)		// CHANGE LES '.' EN 0 ET LES '#' EN 1
{
	int		i;
	long	ret;
	char	*str;

	str = ft_check(s);
	i = 0;
	ret = 0;
	while (str[i])
	{
		if (str[i] == '.')
			str[i] = '0';
		if (str[i] == '#')
			str[i] = '1';
		i++;
	}
	str[i] = '\0';
	ret = ft_atoi(str);
	return (ret);
}
