#include <iostream>

//1.Crie uma função void troca(int* a, int*b) que troca os valores dos parâmetros a e b. 

void troca(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;

	std::cout << "valores trocados: " << *a << " " << *b << std::endl;	
}


int main()
{
	int x, y;

	std::cout << "Digite um numero: " << std::endl;
	std::cin >> x;

	std::cout << "Digite um numero: " << std::endl;
	std::cin >> y;

	std::cout << "valores trocados: " << x << " " << y << std::endl;

	void(*trocar)(int*, int*);
	trocar = troca;
	trocar(&x, &y);
	
	system("pause");
	return 0;
}