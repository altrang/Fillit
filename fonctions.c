/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fonctions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcalime <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 13:28:19 by pcalime           #+#    #+#             */
/*   Updated: 2015/12/08 13:56:33 by pcalime          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct	s_tetrimini
{
	char	lettre;
	char	forme;
}				t_tetrimini;



int		main(int argc, char **argv);

int		ft_counttetri(char *str);
int		ft_checkcolonne(char *str);

malloc t_tetrimini > ft_counttetri
--->tableau de struct de tetriminos

ft_recup(tab struct tetri, char *str)
	rempli le tableau de struct tetri

y = ft_trouve_mini_carre(ft_counttetri)

while(ft_resolve == 0)
	int	ft_resolve(tab struct tetri, tab(y,y))
		si le tableau est rempli	
			return(1);
		sinon
			return(0);
	taille tab(y,y)++;

ft_affiche(tab(y,y));


