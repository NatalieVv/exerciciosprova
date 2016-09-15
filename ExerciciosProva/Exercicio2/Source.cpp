//2.	Refaça a função do exercício 1 utilizando referencias. void troca(int& a, int& b)

#include <iostream>

void troca(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;

	std::cout << "valores trocados: " << a << " " << b << std::endl;
}

int main()
{
	int x = 5, y = 2;
	
	void(*trocar)(int&, int&);
	trocar = troca;
	trocar(x, y);

	system("pause");
	return 0;
}