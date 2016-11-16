/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_piece.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrang <atrang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/17 21:04:06 by atrang            #+#    #+#             */
/*   Updated: 2015/12/18 14:45:25 by atrang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_check_piece(t_tetrimini tab_piece, char **tab_final)
{
	int x;
	int y;

	x = 0;

	while (tab_final[x])
	{
		y = 0;
		while (tab_final[x][y])
		{
			if (tab_piece.letter == tab_final[x][y])
				return (0);
			y++;
		}
		x++;
	}
	return (1);
}
