#include <iostream>

struct Item
{
	int valor;
	Item *anterior;
};

Item *adicionar (Item *anterior, int valor)
{
	Item *p;
	p = (Item*)malloc(sizeof(Item));
	anterior = p;
}

void Imprimir(Item *ultimo)
{

}

int main()
{


	system("pause");
	return 0;
}