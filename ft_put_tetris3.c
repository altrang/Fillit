/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_tetris.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcalime <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 15:31:20 by pcalime           #+#    #+#             */
/*   Updated: 2015/12/11 16:05:36 by atrang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_put_pipe(char ***tab, t_tetrimini tab_piece)		// VERIFIE LA PLACE LIBRE OU PAS 
{
	int		x;
	int		y;

	x = 0;
	while (tab[0][x])
	{
		y = 0;
		while (tab[0][x][y])
		{
			if (tab[0][x][y + 2] == '.' && tab[0][x + 1][y] == '.' &&
			tab[0][x + 1][y + 1] == '.' && tab[0][x + 1][y + 2] == '.')
			{
				tab[0][x][y + 2] = tab_piece.letter;
				tab[0][x + 1][y] = tab_piece.letter;
				tab[0][x + 1][y + 1] = tab_piece.letter;
				tab[0][x + 1][y + 2] = tab_piece.letter;
				return (1);
			}
			y++;
		}
		x++;
	}
	return (0);
}

int		ft_put_reversed_gun(char ***tab, t_tetrimini tab_piece)
{
	int		x;
	int		y;

	x = 0;
	while (tab[0][x])
	{
		y = 0;
		while (tab[0][x][y])
		{
			if (tab[0][x][y] == '.' && tab[0][x][y + 1] == '.' && tab[0][x][y + 2] == '.' 
					&& tab[0][x + 1][y + 2] == '.')
			{
				tab[0][x][y] = tab_piece.letter;
				tab[0][x][y + 1] = tab_piece.letter;
				tab[0][x][y + 2] = tab_piece.letter;
				tab[0][x + 1][y + 2] = tab_piece.letter;
				return (1);
			}
			y++;
		}
		x++;
	}
	return (0);
}

int		ft_put_right_t(char ***tab, t_tetrimini tab_piece)
{
	int		x;
	int		y;

	x = 0;
	while (tab[0][x])
	{
		y = 0;
		while (tab[0][x][y])
		{
			if (tab[0][x][y] == '.' && tab[0][x + 1][y] == '.' && tab[0][x + 1][y + 1] == '.' 
					&& tab[0][x + 2][y] == '.')
			{
				tab[0][x][y] = tab_piece.letter;
				tab[0][x + 1][y] = tab_piece.letter;
				tab[0][x + 1][y + 1] = tab_piece.letter;
				tab[0][x + 2][y] = tab_piece.letter;
				return (1);
			}
			y++;
		}
		x++;
	}
	return (0);
}

int		ft_put_vertical_pipe(char ***tab, t_tetrimini tab_piece)
{
	int		x;
	int		y;

	x = 0;
	while (tab[0][x])
	{
		y = 0;
		while (tab[0][x][y])
		{
			if (tab[0][x][y] == '.' && tab[0][x][y + 1] == '.' && tab[0][x + 1][y + 1] == '.' 
					&& tab[0][x + 2][y + 1] == '.')
			{
				tab[0][x][y] = tab_piece.letter;
				tab[0][x][y + 1] = tab_piece.letter;
				tab[0][x + 1][y + 1] = tab_piece.letter;
				tab[0][x + 2][y + 1] = tab_piece.letter;
				return (1);
			}
			y++;
		}
		x++;
	}
	return (0);
}

int		ft_put_reversed_pipe(char ***tab, t_tetrimini tab_piece)
{
	int		x;
	int		y;

	x = 0;
	while (tab[0][x])
	{
		y = 0;
		while (tab[0][x][y])
		{
			if (tab[0][x][y] == '.' && tab[0][x + 1][y] == '.' && tab[0][x + 1][y + 1] == '.' 
					&& tab[0][x + 1][y + 2] == '.')
			{
				tab[0][x][y] = tab_piece.letter;
				tab[0][x + 1][y] = tab_piece.letter;
				tab[0][x + 1][y + 1] = tab_piece.letter;
				tab[0][x + 1][y + 2] = tab_piece.letter;
				return (1);
			}
			y++;
		}
		x++;
	}
	return (0);
}
