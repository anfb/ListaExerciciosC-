/*
 Exerc�cio 2: Crie uma fun��o (de prefer�ncia recursiva) que retorne a soma dos N
 elementos da sequ�ncia onde o pr�ximo elemento � o dobro do anterior. Exemplo: 1, 2, 4,
 8, 16, 32, 64�
*/
#include <iostream>
#include "Q2.h"

int Sum = 0;

int DoubleSum(int QtdElementSequece, int Count)
{
	std::cout << "Number: " << Count << "\n";
	
	if (QtdElementSequece > 0) {
		Sum += Count;
		Count *= 2;
		QtdElementSequece--;
		DoubleSum(QtdElementSequece, Count);
	}

	return Sum;
}
