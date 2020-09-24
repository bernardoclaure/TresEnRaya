#pragma once
#include <iostream>
using namespace std;
class Tablero
{
private:
	char tablero[3][3];
public:
	Tablero();
	~Tablero();
	void marcarFichaEnTablero(char ficha, int posicion);
	bool existeLineaHorizontal(int valorFila, char ficha);
	bool existeLineaVertical(int valorColumna, char ficha);
	bool existePendienteIzquierda(char ficha);
	bool existePendienteDerecha(char ficha);
	bool alguienGano(char ficha);
	void mostrar();
};

