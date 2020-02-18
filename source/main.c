/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalikhan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 18:33:53 by aalikhan          #+#    #+#             */
/*   Updated: 2020/02/17 19:12:28 by aalikhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <sys/types.h>
#include <dirent.h>
#include <stdlib.h>
#include <unistd.h>

int		
main(int argc, char *argv[])
{
	DIR		*dir;
	struct dirent *sd;
	(void)argc;
	(void)argv;


	dir = opendir(".");

	if(dir == NULL)
	{
		printf("Error! Unable to open directory. \n");
		exit(1);
	}

	while( (sd=readdir(dir)) != NULL )
	{
	
		printf(">> %s\n", sd->d_name);
		
	}

	closedir(dir);

	return 0;
}
