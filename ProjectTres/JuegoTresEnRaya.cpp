#include "JuegoTresEnRaya.h"

JuegoTresEnRaya::JuegoTresEnRaya()
{
    //6. DATA CLUMPS -> un mismo conjunto de datos utilizados en lugar de una clase
    this->juegoTerminado = false;
    this->empate = false;
    this->ficha = 'X';
    this->cantidadDeJugadas = 0;
    this->posicionAJugar = '0';
}

JuegoTresEnRaya::~JuegoTresEnRaya()
{
}

//2.METODO GRANDE -> main
void JuegoTresEnRaya::iniciarJuego()
{
    do
    {
        //1. CODIGO DUPLICADO -> mostrar tablero 
        tablero.mostrar();
        pedirPosicionJugador();
        setCantJugadas(getCantJugadas() + 1);
        tablero.marcarFichaEnTablero(getFicha(), getPosicionAJugar());
        if (tablero.alguienGano(getFicha()))
            setJuegoTerminado(true);
        verificarEmpate();
        cambiarTurnoSigJugador();
    } while (getJuegoTerminado() == false && getEmpate() == false);
    tablero.mostrar();
    mostrarResultado();
}

void JuegoTresEnRaya::pedirPosicionJugador()
{
    char posicionNueva;
    cout << "juega la ficha " << getFicha() << endl;
    cin >> posicionNueva;
    setPosicionAJugar(posicionNueva);
}

void JuegoTresEnRaya::cambiarTurnoSigJugador()
{
    if (getFicha() == 'X')
        setFicha('O');
    else
        setFicha('X');
}

void JuegoTresEnRaya::mostrarResultado()
{
    if (getJuegoTerminado() == true)
        cout << "La ficha " << getFicha() << " perdio" << endl;
    else
        cout << "Empate!" << endl;
}

void JuegoTresEnRaya::verificarEmpate()
{
    if (getCantJugadas() == 9)
        setEmpate(true);
}

// GETTER ANS SETTERS
void JuegoTresEnRaya::setJuegoTerminado(bool nuevoEstado)
{
    this->juegoTerminado = nuevoEstado;
}

bool JuegoTresEnRaya::getJuegoTerminado()
{
    return this->juegoTerminado;
}

char JuegoTresEnRaya::getPosicionAJugar()
{
    return this->posicionAJugar;
}

void JuegoTresEnRaya::setPosicionAJugar(char nuevaPosicionAJugar)
{
    this->posicionAJugar = nuevaPosicionAJugar;
}

char JuegoTresEnRaya::getFicha()
{
    return this->ficha;
}

void JuegoTresEnRaya::setFicha(char nuevaFicha)
{
    this->ficha = nuevaFicha;
}

int JuegoTresEnRaya::getCantJugadas()
{
    return this->cantidadDeJugadas;
}

void JuegoTresEnRaya::setCantJugadas(int nuevaJugada)
{
    this->cantidadDeJugadas = nuevaJugada;
}

bool JuegoTresEnRaya::getEmpate()
{
    return this->empate;
}

void JuegoTresEnRaya::setEmpate(bool nuevoEstado)
{
    this->empate = nuevoEstado;
}



