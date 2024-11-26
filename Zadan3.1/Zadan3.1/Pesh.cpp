#include "Pesh.h"
#include <iostream>

void chfor()
{
	setlocale(LC_ALL, "Rus");
	std::cout << "Цикл for" << std::endl;
	for (int i = 1; i <= 10; i++)
	{
		for (int k = 1; k <= 10; k++)
		{
			int proiz = i * k;
			std::cout << i << "*" << k << "=" << proiz<<std::endl;
		}
	}
}
void chwhile()
{
	setlocale(LC_ALL, "Rus");
	std::cout << "Цикл while" << std::endl;
		int i = 1;
		
		while (i <= 10)
		{
			int k = 1;
			while (k <= 10)
			{
				int proiz2 = i * k;
				std::cout << i << "*" << k << "=" << proiz2 << std::endl;
				k++;
				
			}
			i++;
			
		}
}
void chdowhile()
{
		setlocale(LC_ALL, "Rus");
		std::cout << "Цикл do-while" << std::endl;
		int i = 1;
		do
		{
			int k = 1;
			do
			{
				int proiz2 = i * k;
				std::cout << i << "*" << k << "=" << proiz2 << std::endl;
				k++;
			} while (k<=10);
			i++;
		} while (i<=10);
}