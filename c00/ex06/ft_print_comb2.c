/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noldiane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 16:44:59 by noldiane          #+#    #+#             */
/*   Updated: 2023/08/08 16:45:10 by noldiane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_comb2(void) {

    char    C1_1;
    char    C1_2;

    char    C2_1;
    char    C2_2;

    C1_1 = '0';
    C1_2 = '0';

    C2_1 = '0';
    C2_2 = '0';

    while (C1_1 <= '9') {

        while (C1_2 < '9') {

             while (C2_1 < '9') {

                while (C2_2 < '9') {

                    C2_2 += 1;

                    write(1, &C1_1, 1);
                    write(1, &C1_2, 1);
                    write(1, &" ", 1);
                    write(1, &C2_1, 1);
                    write(1, &C2_2, 1);
                    write(1, &", ", 2);

                }

                C2_1 += 1;
                C2_2 = '1';

                if (C2_1 == '9') {

                    while (C2_2 < '9') {

                        C2_2 += 1;

                        write(1, &C1_1, 1);
                        write(1, &C1_2, 1);
                        write(1, &" ", 1);
                        write(1, &C2_1, 1);
                        write(1, &C2_2, 1);
                        write(1, &", ", 2);

                    }

                } else {

                    write(1, &C1_1, 1);
                    write(1, &C1_2, 1);
                    write(1, &" ", 1);
                    write(1, &C2_1, 1);
                    write(1, &C2_2, 1);
                    write(1, &", ", 2);

                }

            }

            C1_2 += 1;
            C2_1 = '0';
            C2_2 = '0';

            write(1, &C1_1, 1);
            write(1, &C1_2, 1);
            write(1, &" ", 1);
            write(1, &C2_1, 1);
            write(1, &C2_2, 1);
            write(1, &", ", 2);

        }

        C1_1 += 1;
        C1_2 = '0';
        C2_1 = '0';
        C2_2 = '0';

        write(1, &C1_1, 1);
        write(1, &C1_2, 1);
        write(1, &" ", 1);
        write(1, &C2_1, 1);
        write(1, &C2_2, 1);
        write(1, &", ", 2);


    }


    while (C2_1 < '9') {

        C1_1 = '9';
        C1_2 = '9';

        while (C2_2 < '9') {

            C2_2 += 1;

            write(1, &C1_1, 1);
            write(1, &C1_2, 1);
            write(1, &" ", 1);
            write(1, &C2_1, 1);
            write(1, &C2_2, 1);
            write(1, &", ", 2);

        }

        C2_1 += 1;
        C2_2 = '1';

        if (C2_1 == '9') {

            while (C2_2 < '9') {

                C2_2 += 1;

                write(1, &C1_1, 1);
                write(1, &C1_2, 1);
                write(1, &" ", 1);
                write(1, &C2_1, 1);
                write(1, &C2_2, 1);

                if (!(C2_1 == '9' && C2_2 == '9')) {

                    write(1, &", ", 2);

                }

            }

        } else {

            write(1, &C1_1, 1
    }
}