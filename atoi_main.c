/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 14:41:53 by wimaguir          #+#    #+#             */
/*   Updated: 2020/02/24 16:02:12 by wimaguir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int		main(void)
{
	char numbers[] = "-2147483649";

	printf("%d\n", ft_atoi(numbers));
	printf("%d\n", atoi(numbers));
	return (0);
}
