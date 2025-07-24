/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcongolo <jcongolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 17:15:54 by jcongolo          #+#    #+#             */
/*   Updated: 2025/07/24 17:31:36 by jcongolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    ft_is_prime - Verifica se um número é primo
    Parâmetro:
        nbr → número inteiro a ser testado
    Comportamento:
        - Retorna 0 se o número for menor que 2 (não primo)
        - Testa divisores de 2 até a raiz quadrada de nbr
        - Se encontrar algum divisor exato, retorna 0
        - Se não encontrar nenhum divisor, retorna 1 (é primo)
    Retorno:
        - 1 → se o número for primo
        - 0 → se não for primo
*/
int ft_is_prime(int nbr)
{
    int i;

    if (nbr < 2)
    {
        return(0);
    }
    
    i = 2;
    while (i * i <= nbr)
    {
        if (nbr % i == 0)
        {
            return(0);
        }
        i++;
    }
    return(1);
}

/*
    ft_find_next_prime - Retorna o número primo imediatamente
        superior ou igual ao parâmetro
    Parâmetro:
        nb → número inteiro a partir do qual queremos encontrar o próximo primo
    Comportamento:
        - Se nb já for primo, retorna nb
        - Se nb não for primo, busca o próximo número maior que seja primo
        - Utiliza a função ft_is_prime para verificar a primalidade
    Retorno:
        - O número primo mais próximo, igual ou superior a nb
    Funções autorizadas:
        - Nenhuma
*/

int ft_find_next_prime(int nb)
{
    while (ft_is_prime(nb) == 0)
    {
        nb++;
    }
    return(nb);
}