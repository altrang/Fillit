/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recup.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcalime <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 19:59:21 by pcalime           #+#    #+#             */
/*   Updated: 2015/12/10 15:47:03 by pcalime          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_recup(t_tetrimini *tab_piece, char *str)
{
	char	*tmp;

	if (ft_checkcolonne(str) == 0)
		return (0);
	tmp = ft_no_newline(str);
	printf("%s", ft_split_piece(tmp)[0]);
	printf("%s", ft_split_piece(tmp)[1]);
	(void)tab_piece;
	return (1);
}
