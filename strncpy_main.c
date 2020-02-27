/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncpy_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 16:04:34 by wimaguir          #+#    #+#             */
/*   Updated: 2020/02/26 21:01:34 by wimaguir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int		main(void)
{
	char array[15];
	char testarray[15];

	printf("%s\n", ft_strncpy(array, "billy", 4));
	printf("%s\n", strncpy(testarray, "billy", 4));
	return (0);
}
