/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_remove_piece.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrang <atrang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/17 21:11:30 by atrang            #+#    #+#             */
/*   Updated: 2015/12/18 14:46:08 by atrang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_retire_piece(t_tetrimini tab_piece, char ***tab_final)
{
	int x;
	int y;

	x = 0;
	while (tab_final[0][x])
	{
		y = 0;
		while (tab_final[0][x][y])
		{
			if (tab_piece.letter == tab_final[0][x][y])
				tab_final[0][x][y] = '.';
			y++;
		}
	x++;
	}
}
