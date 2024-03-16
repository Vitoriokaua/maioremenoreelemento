/*ENTRADA: Receba número elementos desejados (máximo de 20)
PROCESSAMENTO:
 - Armazena estes dados em um array.
 - Encontrar maior e o menor elemento desse array
SAÌDA: mostre na tela o maior e o menor elemento desse array
*/


#include <iostream>
using namespace std;

int main(){
	
	int vetor[20];
	int min, max;
	int numelementos;

	cout << "digite o numero de elementos desejados: ";
	cin >> numelementos;
	
	//Se o usuário digitar 14
	//o vetor vai de índice 0 até 13
	//logo i precisa ser menor que 14 ou seja 
	//i < NumElementos
	
	for (int i = 0; i < numelementos; i++)
	{

		//primeiro vamos receber o vetor, a entrada de dados

		cout << "Digite o Elemento" << (i + 1) << ": ";
		cin >> vetor[i];
	}

	//Depois de receber  todo Array vamos ao PROCESSAMENTO
	//Você deve varrer novamente este Array e efetuar a lógica de 
	//achar o valor Min e Max
	min = vetor[0];
	max = vetor[0];
	//No inicio tanto min quanto max são o primeiro elemento vetor

	//Precisamos varrer o vetor e analisar max e min
	//Aqui Processamento
	for (int i = 0; i < numelementos; i++)
	{
		if (vetor[i] > max)
			max = vetor[i];
		else if (vetor[i] < min)
			min = vetor[i];
	}
	cout << "\n O Menor Valor digitado foi: " << min << "\n";
	cout << "\n O Maior Valor digitado foi: " << max << "\n";


}