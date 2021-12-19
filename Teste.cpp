//============================================================================
// Name        : Teste.cpp
// Author      : Mait� Luisa da Silva
// Version     :
// Copyright   : Your copyright notice
// Description : vetor
//============================================================================

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	vector<int> user_vetor{0,0,0,0,0,0,0};
	vector<int>:: iterator i;

	cout << "Vetor de 7 n�meros inteiros\n\n";

	for(i = user_vetor.begin(); i != user_vetor.end(); i++){
		cout << "Digite um n�mero: ";
		cin >> *i;
	}

	for(i = user_vetor.begin(); i != user_vetor.end(); i++){
		cout << *i;
		cout << " ";
	}

	cout << "\n\nO menor elemento �: \n" << *min_element(user_vetor.begin(),user_vetor.end()) << '\n';
	cout << "\nO maior elemento �: \n"  << *max_element(user_vetor.begin(),user_vetor.end()) << '\n';

	sort(user_vetor.begin(), user_vetor.end(), less<int>());

	cout << "\nVetor ordenado: \n";

	for(i = user_vetor.begin(); i != user_vetor.end(); i++){
				cout << *i;
				cout << " ";
			}

}
