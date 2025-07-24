/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcongolo <jcongolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 08:26:04 by jcongolo          #+#    #+#             */
/*   Updated: 2025/07/24 14:25:15 by jcongolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    ft_fibonacci - Retorna o n-ésimo número da sequência de Fibonacci (recursivamente)
    Parâmetro:
        index → posição do termo desejado na sequência (começa de 0)
    Comportamento:
        - Retorna -1 se index < 0
        - Retorna 0 se index == 0
        - Retorna 1 se index == 1
        - Caso geral: retorna a soma de ft_fibonacci(index - 1) + ft_fibonacci(index - 2)
    Retorno:
        - n-ésimo termo da sequência de Fibonacci
        - Retorno indefinido em caso de overflow
    Funções autorizadas:
        - Nenhuma
*/
int ft_fibonacci(int index)
{
    //index = 3;
    if (index < 0)
    {
        return(-1);
    }
    else if (index == 0)
    {
        return(0);
    }
    else if (index == 1)
    {
        return(1);
    }
    return(ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
    //primeira ramo de recursividade:
    //Primeira vez (3 - 1) = (2) 
    //Segunda vez (2 - 1) = (1) Verifica (index == 1) e retorna 1;
    //Terceira vez (1 - 1) = (0) Verifica (index == 0) e retorna 0;
    //Suma de dois retornos 1 + 0 = 1;

    //Segunda ramo de recursividade:
    //Primera vez (3 - 2) = (1); Verifica (index == 1) e retorna 1;
    
    // (+) soma dos dois recursividades
    //Sumar os dois retornos: 1 + 1 = 2;
}

#include <stdio.h>
int main(void)
{
    int index = 3;
    printf("A sequencia de Fibonacci de %d é -> [%d]\n", index, ft_fibonacci(index));
    
    int i = 0;
    while (i <= index)
    {
        printf("Aposiçao de %d é -> [%d]\n", i, ft_fibonacci(i));
        i++;
    }
    
    return(0);
}

/*
    A funçao constrói o valor da posição 3
    somando os dois valores anteriores.
*/