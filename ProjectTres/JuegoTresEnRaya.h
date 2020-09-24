#pragma once
#include "Tablero.h"

class JuegoTresEnRaya
{
private:
    bool juegoTerminado;
    //4. IDENTIFICADORES EXCESIVAMENTE CORTOS -> empate = e
    bool empate;
    //5. ENVIDIA DE CARACTERISTICAS -> muchas funciones del tablero las implementaba
    Tablero tablero;
    char ficha;
    int cantidadDeJugadas;
    char posicionAJugar;
public:
    JuegoTresEnRaya();
    ~JuegoTresEnRaya();
    
    void setJuegoTerminado(bool nuevoEstado);
    bool getJuegoTerminado();

    char getPosicionAJugar();
    void setPosicionAJugar(char nuevaPosicionAJugar);

    char getFicha();
    void setFicha(char nuevaFicha);

    bool getEmpate();
    void setEmpate(bool nuevoEstado);
    
    int getCantJugadas();
    void setCantJugadas(int nuevaJugada);
    
    void iniciarJuego();
    void pedirPosicionJugador();
    void verificarEmpate();
    void cambiarTurnoSigJugador();
    void mostrarResultado();
    
};

