/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucongol <jucongol@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-07-23 15:27:02 by jucongol          #+#    #+#             */
/*   Updated: 2025-07-23 15:27:02 by jucongol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    ft_recursive_factorial - Calcula o fatorial de um número de forma recursiva
    Parâmetro:
        nb → número inteiro para o qual se deseja calcular o fatorial
    Comportamento:
        - Se nb for menor que 0, retorna 0 (fatorial não é definido para negativos)
        - Se nb for igual a 0, retorna 1 (por definição: 0! = 1)
        - Se nb for positivo, retorna nb multiplicado pelo fatorial de (nb - 1)
    Retorno:
        - Resultado do cálculo fatorial
        - Retorno indefinido em caso de overflow
    Funções autorizadas:
        - Nenhuma
*/
int ft_recursive_factorial(int nb)
{
    //nb = 3;
    // Fatoriais negativos não existem
    if(nb < 0)
    {
        return(0);
    }
    else if(nb == 0)//Caso 0, retorna 1
    {
        return(1);
    }
    // Chamada recursiva: nb * fatorial de nb - 1
    return(nb * (ft_recursive_factorial(nb - 1)));
    //(3 * ft_recursive_factorial(2));
    //(2 * ft_recursive_factorial(1));
    //(1 * ft_recursive_factorial(0)); if(0 == 0) -> return 1;
    //1 * 1;
    //2 * 1;
    //3 * 2; Valor final que a funçao retorna
}

/*
    #include <stdio.h>
    int main(void)
    {
        int nb = 3;
        printf("Factoriial de %d = [%d]\n", nb, ft_recursive_factorial(nb));
        return(0);
    }
*/