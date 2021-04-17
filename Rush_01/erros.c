/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   erros.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anferrei <anferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 00:33:31 by anferrei          #+#    #+#             */
/*   Updated: 2021/04/12 02:24:05 by anferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int erros(char *entrada)
{
    int erro;
    erro = 1;

    /*----------------------COLS-----------------------*/

    if((entrada[1] == entrada[5]) && entrada[1] == '1')
        erro = 0;

    if((entrada[2] == entrada[6]) && entrada[2] == '1')
        erro = 0;

    if((entrada[3] == entrada[7]) && entrada[1] == '1')
        erro = 0;

    /*----------------------ROWS-----------------------*/

    if((entrada[8] == entrada[12]) && entrada[8] == '1')
        erro = 0;

    if((entrada[9] == entrada[13]) && entrada[9] == '1')
        erro = 0;

    if((entrada[10] == entrada[14]) && entrada[10] == '1')
        erro = 0;

    if((entrada[11] == entrada[15]) && entrada[11] == '1')
        erro = 0;

    /*----------------------COLS-----------------------*/

    if((entrada[0] == '2' && entrada[4] == '4') || (entrada[0] == '4' && entrada[4] == '2'))
        erro = 0;

    if((entrada[1] == '2' && entrada[5] == '4') || (entrada[1] == '4' && entrada[5] == '2'))
        erro = 0;

    if((entrada[2] == '2' && entrada[6] == '4') || (entrada[2] == '4' && entrada[6] == '2'))
        erro = 0;

    if((entrada[3] == '2' && entrada[7] == '4') || (entrada[3] == '4' && entrada[7] == '2'))
        erro = 0;

    /*----------------------ROWS-----------------------*/

    if((entrada[8] == '2' && entrada[12] == '4') || (entrada[8] == '4' && entrada[12] == '2'))
        erro = 0;

    if((entrada[9] == '2' && entrada[13] == '4') || (entrada[9] == '4' && entrada[13] == '2'))
        erro = 0;

    if((entrada[10] == '2' && entrada[14] == '4') || (entrada[10] == '4' && entrada[14] == '2'))
        erro = 0;

    if((entrada[11] == '2' && entrada[15] == '4') || (entrada[11] == '4' && entrada[15] == '2'))
        erro = 0;

    /*----------------------COLS-----------------------*/

    if(entrada[0] == '3' && entrada[4] == '3')
        erro = 0;

    if(entrada[1] == '3' && entrada[5] == '3')
        erro = 0;

    if(entrada[2] == '3' && entrada[6] == '3')
        erro = 0;

    if(entrada[3] == '3' && entrada[7] == '3')
        erro = 0;

    /*----------------------ROWS-----------------------*/

    if(entrada[8] == '3' && entrada[12] == '3')
        erro = 0;

    if(entrada[9] == '3' && entrada[13] == '3')
        erro = 0;

    if(entrada[10] == '3' && entrada[14] == '3')
        erro = 0;

    if(entrada[11] == '3' && entrada[15] == '3')
        erro = 0;

    /*----------------------COLS-----------------------*/

    if((entrada[0] == '3' && entrada[4] == '4') || (entrada[0] == '4' && entrada[4] == '3'))
        erro = 0;

    if((entrada[1] == '3' && entrada[5] == '4') || (entrada[1] == '4' && entrada[5] == '3'))
        erro = 0;

    if((entrada[2] == '3' && entrada[6] == '4') || (entrada[2] == '4' && entrada[6] == '3'))
        erro = 0;

    if((entrada[3] == '4' && entrada[7] == '4') || (entrada[3] == '4' && entrada[7] == '3'))
        erro = 0;

    /*----------------------ROWS-----------------------*/

    if((entrada[8] == '3' && entrada[12] == '4') || (entrada[8] == '4' && entrada[12] == '3'))
        erro = 0;

    if((entrada[9] == '3' && entrada[13] == '4') || (entrada[9] == '4' && entrada[13] == '3'))
        erro = 0;

    if((entrada[10] == '3' && entrada[14] == '4') || (entrada[10] == '4' && entrada[14] == '3'))
        erro = 0;

    if((entrada[11] == '3' && entrada[15] == '4') || (entrada[11] == '4' && entrada[15] == '3'))
        erro = 0;

    /*----------------------COLS-----------------------*/

    if(entrada[0] == '4' && entrada[4] == '4')
        erro = 0;

    if(entrada[1] == '4' && entrada[5] == '4')
        erro = 0;

    if(entrada[2] == '4' && entrada[6] == '4')
        erro = 0;

    if(entrada[3] == '4' && entrada[7] == '4')
        erro = 0;

    /*----------------------ROWS-----------------------*/

    if(entrada[8] == '4' && entrada[12] == '4')
        erro = 0;

    if(entrada[9] == '4' && entrada[13] == '4')
        erro = 0;

    if(entrada[10] == '4' && entrada[14] == '4')
        erro = 0;

    if(entrada[11] == '4' && entrada[15] == '4')
        erro = 0;

    return erro;
}