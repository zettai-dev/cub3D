/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_rays.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouahib <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 18:19:57 by aouahib           #+#    #+#             */
/*   Updated: 2019/12/09 18:21:04 by aouahib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ray.h"

void	free_rays(void)
{
	free(g_rays);
}