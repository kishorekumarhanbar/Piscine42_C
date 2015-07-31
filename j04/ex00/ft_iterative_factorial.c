/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/13 09:20:56 by nsimon            #+#    #+#             */
/*   Updated: 2015/07/13 17:17:18 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int x;
	int i;

	if (nb >= 0 && nb <= 12)
	{
		x = 1;
		i = 1;
		while (i <= nb)
		{
			x = x * i;
			i++;
		}
		return (x);
	}
	else
		return (0);
}