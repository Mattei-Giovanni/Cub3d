/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmattei <gmattei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 17:41:40 by gmattei           #+#    #+#             */
/*   Updated: 2023/10/05 15:37:12 by gmattei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/cub3d.h"

int	main(int argc, char **argv)
{
	int	fd;

	if (argc != 2)
		return (err("Wrong number of arguments", "Try ./cub3d maps/map.cub"));
	if (ft_strncmp(&argv[1][ft_strlen(argv[1]) - 4], ".cub", 4) != 0)
		return (err("Wrong file extension", "Try ./cub3d maps/map.cub"));
	fd = open(argv[1], O_RDONLY);
	if (fd <= 0)
		return (err("Map file not found", \
		"Try ./cub3d maps/map.cub or check the path"));
	close(fd);
	return (0);
}
