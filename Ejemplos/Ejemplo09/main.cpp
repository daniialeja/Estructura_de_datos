#include <iostream>
using namespace std;

void machaca1(int x, int* y)
{
	*y= x;
	return;
}

void machaca2(int x, int& y)
{
	y= x;
	return;
}

int main(int argc, char** argv)
{
	int a, b;
	cout << "Escribe dos datos enteros: " << endl;
	cin >> a >> b;
	int copia = b;
	cout << "Antes de machaca1: " << a << " y " << b << endl;
	machaca1(a, &b);
	cout << "Después de machaca1: " << a << " y " << b << endl << endl;
	b = copia;
	cout << "Antes de machaca2: " << a << " y " << b << endl;
	machaca2(a, b);
	cout << "Después de machaca2: " << a << " y " << b << endl;
	return 0;
	
}

void ejemplo(int a, int& b)
{
	a= 5;
	b= 8;
}
