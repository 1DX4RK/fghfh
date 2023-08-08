/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noldiane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 12:07:15 by noldiane          #+#    #+#             */
/*   Updated: 2023/08/08 12:07:22 by noldiane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_alphabet(void) {
    
    char    a;
    
    a = 'a';
    
    while (a >= 'a' && a <= 'z') {
        write(1, &a, 1);
        a += 1;
    }

}