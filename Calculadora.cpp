//============================================================================
// Name        : Calculadora.cpp
// Author      : Maitê Luisa da Silva
// Version     :
// Copyright   : Your copyright notice
// Description : Calculadora de Números Complexos
//============================================================================

#include <iostream>

using namespace std;

class Complex{

	public:
		Complex(double real, double imaginary){
			this->real = real;
			this->imaginary = imaginary;
		}

		Complex(){
			this->real = 0;
			this->imaginary = 0;
		}

		Complex operator+(const Complex& c){
			Complex complex;
			complex.real = this->real + c.real;
			complex.imaginary = this->imaginary + c.imaginary;
			return complex;
		}

		Complex operator-(const Complex& c){
			Complex complex;
			complex.real = this->real - c.real;
			complex.imaginary = this->imaginary - c.imaginary;
			return complex;
		}

		Complex operator*(const Complex& c){
			Complex complex;
			complex.real = this->real*c.real - this->imaginary*c.imaginary ;
			complex.imaginary = this->imaginary*c.real + this->real*c.imaginary;
			return complex;
		}

		Complex operator/(const Complex& c){
			Complex complex;
			complex.real = (this->real*c.real + this->imaginary*c.imaginary)/(c.real*c.real + c.imaginary*c.imaginary);
			complex.imaginary = (this->imaginary*c.real - this->real*c.imaginary)/(c.real*c.real + c.imaginary*c.imaginary);
			return complex;
		}

		friend ostream &operator<<(ostream &output, Complex& complex){
			output << complex.real << " + " << complex.imaginary << "i\n";
			return output;
		}

		friend istream &operator>>(istream &input, Complex& complex){
			cout << "Número complexo: \n";
			cout << "Parte Real: ";
			input >> complex.real;
			cout << "\nParte Imaginária: ";
			input >> complex.imaginary;
			return input;
		}


	private:
		double real;
		double imaginary;

};


int main() {

	while (1){
	Complex complex1;
	Complex complex2;
	Complex complex3;
	int oper;
	cout << "\nCalculadora de Números Complexos\n\n";
	cout << "Digite o primeiro número: \n";
	cin >> complex1;
	cout << "\nDigite o número da operação que deseja realizar:\n";
	cout << "\n1. Soma \n2. Subtração \n3. Multiplicação \n4. Divisão \n5. Sair\n";
	cin >> oper;
	if(oper == 5)
			break;
	cout << "Digite o segundo número: \n";
	cin >> complex2;

	switch (oper) {
	  case 1:
		cout << complex1;
		cout << " + \n";
		cout << complex2;
		cout << " = ";
	    complex3 = complex1 + complex2;
	    cout << complex3;
	    break;
	  case 2:
		cout << complex1;
		cout << " - \n";
  		cout << complex2;
		cout << " = ";
		complex3 = complex1 - complex2;
	    cout << complex3;
	    break;
	  case 3:
		cout << complex1;
		cout << " * \n";
	  	cout << complex2;
		cout << " = ";
		complex3 = complex1 * complex2;
	    cout << complex3;
	    break;
	  case 4:
		cout << complex1;
		cout << " / \n";
	  	cout << complex2;
	  	cout << " = ";
	  	complex3 = complex1 / complex2;
	    cout << complex3;
	    break;
	  case 5:

	    break;
	}
	}

	return 0;
}
