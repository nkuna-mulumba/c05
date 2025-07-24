/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcongolo <jcongolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 14:15:34 by jcongolo          #+#    #+#             */
/*   Updated: 2025/07/24 08:23:25 by jcongolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    ft_iterative_factorial - Calcula o fatorial de um número de forma iterativa
    Parâmetro:
        nb → número inteiro para o qual se deseja calcular o fatorial
    Comportamento:
        - Se nb for menor que zero, retorna 0 (fatorial não definido para negativos)
        - Se nb for zero, retorna 1 (por definição: 0! = 1)
        - Para nb positivo, realiza multiplicações descendentes até 1
    Retorno:
        - Resultado do cálculo fatorial de nb
        - Retorno indefinido em caso de overflow
    Funções autorizadas:
        - Nenhuma
*/
int ft_iterative_factorial(int nb)
{
    unsigned int    factorial;
    //nb = 3;
    if (nb < 0)
    {
        return(0);
    }

    factorial = 1;
    while (nb > 0)
    {
        factorial = factorial * nb;//1*3=3, 3*2=6, 6*1=6; 
        nb--;//2, 1, 0
    }
    return(factorial);//6
}

/*
    #include <stdio.h>
    int main(void)
    {
        int nb = 3;
        printf("Factorial de %d = [%d]\n", nb, ft_iterative_factorial(nb));

        nb = 1;
        printf("Factorial de %d = [%d]\n", nb, ft_iterative_factorial(nb));
        
        nb = 0;
        printf("Factorial de %d = [%d]\n", nb, ft_iterative_factorial(nb));
        
        nb = -1;
        printf("Factorial de %d = [%d]\n", nb, ft_iterative_factorial(nb));
        return(0);
    }
*/