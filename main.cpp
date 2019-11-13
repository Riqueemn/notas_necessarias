#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	int preco;
	
	cout << "Informe o preco: ";
	cin >> preco;
	
	int valor_100 = preco/100;
	preco = preco%100;
	
	int valor_50 = preco/50;
	preco = preco%50;
	
	int valor_20 = preco/20;
	preco = preco%20;
	
	int valor_10 = preco/10;
	preco = preco%10;
	
	int valor_5 = preco/5;
	preco = preco%5;
	
	int valor_2 = preco/2;
	preco = preco%2;
	
	int valor_1 = preco;
	
	int menor_quantidade = valor_100 + valor_50 + valor_20 + valor_10 + valor_5 + valor_2 + valor_1;
	
	cout << "Menor quantidade de notas e: " << menor_quantidade << endl;
	cout << "Notas de 100: " << valor_100 << endl;
	cout << "Notas de 50:  " << valor_50 << endl;
	cout << "Notas de 20:  " << valor_20 << endl;
	cout << "Notas de 10:  " << valor_10 << endl;
	cout << "Notas de 5:   " << valor_5 << endl;
	cout << "Notas de 2:   " << valor_2 << endl;
	cout << "Notas de 1:   " << valor_1 << endl << endl;
	
	system("pause");
	
	
	
	return 0;
}
