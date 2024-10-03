#include <iostream>

class NodoPila
{
public:
	NodoPila(int v, NodoPila* sig = NULL);
	~NodoPila();


private:
	int valor;
	NodoPila* siguiente;
	friend class Pila;
};

typedef NodoPila* pnodoPila;

