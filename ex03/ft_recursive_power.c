/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucongol <jucongol@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-07-23 19:11:24 by jucongol          #+#    #+#             */
/*   Updated: 2025-07-23 19:11:24 by jucongol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    ft_recursive_power - Calcula uma potência de forma recursiva
    Parâmetros:
        nb     → base inteira
        power  → expoente inteiro
    Comportamento:
        - Retorna 0 se power < 0
        - Retorna 1 se nb == 0 e power == 0 (definição especial do exercício)
        - Retorna 1 se power == 0 (qualquer número elevado a 0 é 1)
        - Caso geral: retorna nb multiplicado pela potência recursiva de (nb, power - 1)
    Retorno:
        - Resultado da potência nb ^ power
        - Retorno indefinido se ocorrer overflow
    Funções autorizadas:
        - Nenhuma
*/
int ft_recursive_power(int nb, int power)
{
    //nb = 3;
    // power = 3;
    if(power < 0)
    {
        return(0);
    }
    else if(power == 0)
    {
        return(1);
    }
    else if(nb == 0)
    {
        return(0);
    }
    return(nb * (ft_recursive_power(nb, power - 1)));
    // 3 * (ft_recursive_power(3, 2));
    // 3 * (ft_recursive_power(3, 1));
    // 3 * (ft_recursive_power(3, 0)); Verifica power == 0, retorna 1;

    //Cada resultado é multiplicada por nb
    //3*1 = 3;
    //3*3 = 9;
    //3*9 = 27;
}

/*
    #include <stdio.h>
    int main(void)
    {
        int nb = 3;
        int power = 3;

        printf("%d com potencia de %d = %d\n", nb, power, ft_recursive_power(nb, power));
        return(0);
    }
*/ 