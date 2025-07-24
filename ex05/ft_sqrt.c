/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcongolo <jcongolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 14:46:34 by jcongolo          #+#    #+#             */
/*   Updated: 2025/07/24 16:38:32 by jcongolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    ft_sqrt - Retorna a raiz quadrada inteira de um número
    Parâmetro:
        nb → número inteiro para o qual se deseja calcular a raiz quadrada
    Comportamento:
        - Se nb for negativo, retorna 0
        - Busca um valor i tal que i * i == nb
        - Se encontrar, retorna esse valor (raiz inteira exata)
        - Caso contrário (raiz irracional), retorna 0
    Retorno:
        - Raiz quadrada inteira de nb, se existir
        - Retorna 0 se a raiz for irracional ou nb negativo
    Funções autorizadas:
        - Nenhuma
*/

int ft_sqrt(int nb)
{
    int i;

    if (nb < 0)
    {
        return(0);
    }
    
    i = 0;
    while ((i * i) <= nb)
    {
        if ((i * i) == nb)
        {
            return(i);
        }
        i++;
    }
    return(0);
}

/*
    #include <stdio.h>
    int main(void)
    {
        int nb = 2;
        
        // printf("Raiz quadrado de %d = [%d]\n", nb, ft_sqrt(nb));

        int i = 0;
        while (i <= nb)
        {
            printf("Raiz quadrado de %d = [%d]\n", i, ft_sqrt(i));
            i++;
        }
        return(0);
    }
*/