/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noldiane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 12:20:53 by noldiane          #+#    #+#             */
/*   Updated: 2023/08/08 12:21:00 by noldiane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_is_negative(int n) {

    if (n <= -1) {
        write(1, "N", 1);
    } else {
        write(1, "P", 1);
    }
    
}