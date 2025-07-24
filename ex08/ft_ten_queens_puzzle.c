/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucongol <jucongol@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-07-24 17:09:24 by jucongol          #+#    #+#             */
/*   Updated: 2025-07-24 17:09:24 by jucongol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    ft_putchar - Função auxiliar para escrever um caractere no terminal
    Parâmetro:
        c → caractere a ser impresso
    Comportamento:
        - Utiliza write() para imprimir um único caractere
        - Evita uso de printf conforme restrições do exercício
    Uso:
        - Usado na impressão das soluções dentro da função ft_solve
*/
#include <unistd.h>
void    ft_putchar(char c)
{
    write(1, &c, 1);
}

/*
    ft_is_safe - Verifica se uma dama pode ser posicionada em uma determinada linha
    Parâmetros:
        queen[] → array que representa a linha de cada dama nas colunas já preenchidas
        col     → coluna atual onde se tenta posicionar uma nova dama
        row     → linha candidata para a nova dama
    Comportamento:
        - Verifica se há conflito com damas já posicionadas:
            - Mesma linha
            - Mesma diagonal (principal ou secundária)
    Retorno:
        - 1 → se for seguro colocar a dama
        - 0 → se houver conflito
    Uso:
        - Evita colisões e garante que o posicionamento siga as regras do problema
*/

int ft_is_safe(int queen[], int col, int row)
{
    int i;

    i = 0;
    while (i < col)
    {
        if (queen[i] == row || (col - i) == (row - queen[i]) || (col - i) == (queen[i] - row))
        {
            return (0);
        }
        i++;
    }
    return (1);
}

/*
    ft_solve - Função recursiva que tenta posicionar todas as 10 damas
    Parâmetros:
        queen[] → array que representa o posicionamento parcial das damas
        col     → coluna atual a ser preenchida
        count   → ponteiro para o número de soluções encontradas
    Comportamento:
        - Tenta colocar uma dama segura em cada linha da coluna atual
        - Chama recursivamente ft_solve para a próxima coluna
        - Quando col == 10, imprime a solução encontrada e incrementa o contador
    Uso:
        - É o coração da solução recursiva, responsável por explorar todas as possibilidades válidas
*/
void    ft_solve(int queen[], int col, int *count)
{
    int row;

    if (col == 10)
    {
        int i = 0;
        while (i < 10)
        {
            ft_putchar(queen[i++] + '0');
        }
        write(1, "$\n", 2);
        (*count)++;
        return ;
    }
    row = 0;
    while (row < 10)
    {
        if (ft_is_safe(queen, col, row))
        {
            queen[col] = row;
            ft_solve(queen, col + 1, count);
        }
        row++;
    }
}

/*
    ft_ten_queens_puzzle - Função principal que resolve o problema das 10 damas
    Parâmetros:
        - Nenhum
    Comportamento:
        - Inicializa o vetor queen e o contador de soluções
        - Chama ft_solve para encontrar e imprimir todas as soluções válidas
    Retorno:
        - O número total de soluções possíveis para o problema
    Observação:
        - Usa apenas write() como requerido pelo enunciado
        - Implementação baseada em recursão e backtracking
*/
int ft_ten_queens_puzzle(void)
{
    int queen[10];
    int count;

    count = 0;
    ft_solve(queen, 0, &count);
    return (count);
}

/*
    #include <stdio.h>
    int main(void)
    {
        int total;

        total = ft_ten_queens_puzzle();
        printf("Número total de soluções: %d\n", total);

        return (0);
    }
*/