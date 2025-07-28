/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcongolo <jcongolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 17:20:42 by jucongol          #+#    #+#             */
/*   Updated: 2025/07/28 17:33:33 by jcongolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    ft_iterative_power - Calcula uma potência de um número de forma iterativa
    Parâmetros:
        nb    → número base (inteiro)
        power → expoente (inteiro)
    Comportamento:
        - Retorna 0 se power < 0
        - Retorna 1 se nb == 0 e power == 0
        - Caso contrário, calcula nb elevado à power usando multiplicações sucessivas
    Retorno:
        - Resultado de nb ^ power
        - Retorno indefinido se ocorrer overflow
    Funções autorizadas:
        - Nenhuma
*/
int ft_iterative_power(int nb, int power)
{
    int power_result;

    //nb = 3;
    //power = 3;
    //3*3*3 = 27;
    if(power < 0)
    {
        return(0);
    }
    if(power == 0)
    {
        return(1);
    }

    power_result = 1;
    while(power > 0)//3 > 0; 2 > 0; 1 > 0;
    {
        power_result = power_result * nb;//1*3=3 | 3*3=9 | 9*3=27; Retorna avalor acumulado
        power--;//2, 1, 0
    }
    return(power_result);//27
}

/*
    #include <stdio.h>
    int main(void)
    {
        int nb = 3;
        int power = 3;
        printf("%d com potencia de %d = [%d]\n", nb, power, ft_iterative_power(nb, power));
        return(0);
    }
*/