#include "Igra.h"
#include <iostream>
#include <cstdlib> 
#include <ctime>

int Player1(int a)
{	
	int sign = (a % 2 == 0) ? 1 : -1;
	return sign * (-5 +std::rand() % 11);
	
}
int Player2(int a)
{
	int sign = (a % 2 == 0) ? -1 : 1;
	return sign * (-5+std::rand() % 11);
	
}

void game()
{
	setlocale(LC_ALL, "Russian");
	srand(time(0));
	int count = 0;
	for (int i = 0; i <= 100; i++)
	{
		int value = (i % 2 == 1) ? Player1(i) : Player2(i);
		count += value;

		std::cout << "Шаг " << i << ": Игрок "
			<< ((i % 2 == 1) ? "1" : "2")
			<< " добавить " << value  << std::endl;

		if (count > 50) {
			std::cout << "Игрок " << ((i % 2 == 1) ? "1" : "2") << " Победил!" << std::endl;
			return;
		}
	}
	std::cout << "Ничия"  << std::endl;
				
}