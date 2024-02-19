/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ArgcArgv.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42luxembourg.lu>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 21:55:32 by lfrench           #+#    #+#             */
/*   Updated: 2023/11/30 22:10:20 by lfrench          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(int argc, char **argv)
{
	int i = 0;
	printf("Argc is: %d\n", argc);
	while (i < argc)
	{
		printf("Argv[%d] is \"%s\"\n", i,  argv[i]);
		i++;
	}
	i = 0;
	printf("Argv[1] printed char by char is: ");
	while (argv[1][i] != 0)
	{
		printf("%c", argv[1][i]); 
		i++;
	}
	printf("\n");
	return (0);
}
