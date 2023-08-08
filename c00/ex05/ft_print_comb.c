/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noldiane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 14:16:58 by noldiane          #+#    #+#             */
/*   Updated: 2023/08/08 14:27:05 by noldiane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_comb(void) {
    
    char    a;
    char    b;
    char    c;
    
    a = '0';
    b = '1';
    c = '1';
    
    while (a <= '9') {
        
        while (b < '9') {
            
            while (c < '9') {
                
                c += 1;
                
                if (!(a == '9' && b == '8' && c == '7')) {
                    
                    write(1, &a, 1);
                    write(1, &b, 1);
                    write(1, &c, 1);
                    write(1, ", ", 2);
                
                }
            }
            
            c = '3';
            
            b += 1;
            write(1, &a, 1);
            write(1, &b, 1);
            write(1, &c, 1);
            write(1, ", ", 2);
            
        }
        
        if (a == '9' && b == '9') {
            
            while (c < '8') {
                
                c += 1;
                
                write(1, &a, 1);
                write(1, &b, 1);
                write(1, &c, 1);
                write(1, ", ", 2);
            }
            
	return;
            
        }
        
        b = '0';
        a += 1;

        write(1, &a, 1);
        write(1, &b, 1);
        write(1, &c, 1);
        write(1, ", ", 2);

    }
    
}
