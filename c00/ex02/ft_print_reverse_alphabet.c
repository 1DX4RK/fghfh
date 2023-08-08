/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noldiane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 12:09:52 by noldiane          #+#    #+#             */
/*   Updated: 2023/08/08 12:10:03 by noldiane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_reverse_alphabet(void) {
    
    char    a;
    
    a = 'z';
    
    while (a >= 'a' && a <= 'z') {
        write(1, &a, 1);
        a -= 1;
    }

}