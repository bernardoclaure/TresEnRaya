#include "Tablero.h"

Tablero::Tablero()
{
    char posicion = '1';
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            tablero[i][j] = posicion;
            posicion++;
        }
    }
}

Tablero::~Tablero()
{
}

void Tablero::mostrar()
{
    cout << tablero[0][0] << "|" << tablero[0][1] << "|" << tablero[0][2] << endl;
    cout << tablero[1][0] << "|" << tablero[1][1] << "|" << tablero[1][2] << endl;
    cout << tablero[2][0] << "|" << tablero[2][1] << "|" << tablero[2][2] << endl;
}

void Tablero::marcarFichaEnTablero(char ficha, int posicion)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (posicion == tablero[i][j])
                //3. CODIGO INNECESARIO -> if 
                tablero[i][j] = ficha;
        }
    }
}

bool Tablero::existeLineaHorizontal(int valorFila, char ficha)
{
    if ((tablero[valorFila][0] == ficha && tablero[valorFila][1] == ficha && tablero[valorFila][2] == ficha))
        return true;
    else
        return false;
}

bool Tablero::existeLineaVertical(int valorColumna, char ficha)
{
    if (tablero[0][valorColumna] == ficha && tablero[1][valorColumna] == ficha && tablero[2][valorColumna] == ficha)
        return true;
    else
        return false;
}

bool Tablero::existePendienteIzquierda(char ficha)
{
    if (tablero[0][0] == ficha && tablero[1][1] == ficha && tablero[2][2] == ficha)
        return true;
    else
        return false;
}

bool Tablero::existePendienteDerecha(char ficha)
{
    if ((tablero[2][0] == ficha && tablero[1][1] == ficha && tablero[0][2] == ficha))
        return true;
    else
        return false;
}

bool Tablero::alguienGano(char ficha)
{
    for (int j = 0; j < 3; j++)
    {
        if (existeLineaHorizontal(j, ficha) || existeLineaVertical(j, ficha) || existePendienteIzquierda(ficha) || existePendienteDerecha(ficha))
            return true;
        else
            return false;
    }
}
