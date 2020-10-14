#include <iostream>
#include <clocale> //setlocale
#include <cstdlib> //system
#include <string> //textos em geral

using namespace std;

float consumoMedio(float km, float litros);

int main() {
	setlocale(LC_ALL, "Portuguese");

	float KM, lts, resultado;

	cout << "Informe o percuso em KM: ";
	cin >> KM;

	cout << "Informe a quantidade de combustível utilizado: ";
	cin >> lts;

	resultado = consumoMedio(KM, lts);

	cout << "O consumo médio de combustível foi de " << resultado << " litros por quilometro." << endl << endl;

	system("pause");
	return 0;
}

float consumoMedio(float km, float litros) {
	float consumoMedio;

	consumoMedio = km / litros;

	return consumoMedio;
}