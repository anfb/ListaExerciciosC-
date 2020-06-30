/*
 Exercício 1: Faça um algoritmo que preencha uma matriz de inteiros 3×3 com valores
 aleatórios entre -50 e 50 e, através de uma função, retorne quantas vezes aparece o
 número zero
*/

#include "Q1.h"
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <ctime>
#include <iostream>

int RandomMatrix()
{
    srand((unsigned)time(0));

    int Vector[3][3];
    int RandomNumber = 0;
    int CountZeroes = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            RandomNumber = (rand() % 101) - 50;
            Vector[i][j] = RandomNumber;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (Vector[i][j] == 0)
            {
                CountZeroes++;
            }
            std::cout << Vector[i][j] << " ";
        }
        std::cout << "\n";
    }

    return CountZeroes;
}
