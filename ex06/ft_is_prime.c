/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcongolo <jcongolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 16:46:07 by jcongolo          #+#    #+#             */
/*   Updated: 2025/07/24 17:13:44 by jcongolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    ft_is_prime - Verifica se um número é primo
    Parâmetro:
        nb → número inteiro a ser testado
    Comportamento:
        - Retorna 0 se nb for menor que 2 (porque 0 e 1 não são primos)
        - Testa divisores de 2 até √nb
        - Se encontrar algum divisor, retorna 0 (não é primo)
        - Se não encontrar nenhum divisor, retorna 1 (é primo)
    Retorno:
        - 1 → se nb for um número primo
        - 0 → se nb não for primo
    Funções autorizadas:
        - Nenhuma
*/

int ft_is_prime(int nb)
{
    int i;
    
    if (nb < 2)
    {
        return(0);
    }
    
    i = 2;
    while (i * i <= nb)
    {
        if (nb % i == 0)
        {
            return(0);
        }
        i++;
    }
    return(1);
}
/*
    #include <stdio.h>
    int main(void)
    {
        int nb = 1;
        
        if (ft_is_prime(nb) != 0)
        {
            printf("%d é numero primo\n", nb);
        }
        else
        {
            printf("%d nao é primo \n", nb);
        }
        return(0);
    }
*/