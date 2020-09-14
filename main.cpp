#include <iostream>
#include <string>

using namespace std;
void jugar();
int main()
{
 jugar();
}

void jugar()
{
    bool termino=false;
    bool e=false;
    char tablero [3][3];
    char posicion='1';
    char ficha='X';
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            tablero[i][j]=posicion;
            posicion++;
            
        }
    }
    int jugadas=0;
    do
    {
       cout<<tablero[0][0]<<"|"<<tablero[0][1]<<"|"<<tablero[0][2]<<endl;
       cout<<tablero[1][0]<<"|"<<tablero[1][1]<<"|"<<tablero[1][2]<<endl;
       cout<<tablero[2][0]<<"|"<<tablero[2][1]<<"|"<<tablero[2][2]<<endl;
       char a;
       cout<<"juega la ficha "<<ficha<<endl;
       cin>>a;
       jugadas++;
        for(int i=0;i<3;i++)
        { 
            for(int j=0;j<3;j++)
            {
                if (a==tablero[i][j])
                {
                    if(ficha=='X')
                    {
                    tablero[i][j]=ficha;
                    }
                    else
                    {
                    tablero[i][j]=ficha;
                    }
                    
                }
          
            }
        }
    for(int j=0;j<3;j++)
    {
        if(tablero[j][0]==ficha&&tablero[j][1]==ficha&&tablero[j][2]==ficha)
            termino=true;
        if(tablero[0][j]==ficha&&tablero[1][j]==ficha&&tablero[2][j]==ficha)
            termino=true;
        if(tablero[0][0]==ficha&&tablero[1][1]==ficha&&tablero[2][2]==ficha)
            termino=true;
        if(tablero[2][0]==ficha&&tablero[1][1]==ficha&&tablero[0][2]==ficha)
            termino=true;
    }
    if(ficha=='X')
        ficha='O';
    else
        ficha='X';
    if(jugadas==9)
        e=true;
       
    }while(termino==false&&e!=true);
     cout<<tablero[0][0]<<"|"<<tablero[0][1]<<"|"<<tablero[0][2]<<endl;
     cout<<tablero[1][0]<<"|"<<tablero[1][1]<<"|"<<tablero[1][2]<<endl;
     cout<<tablero[2][0]<<"|"<<tablero[2][1]<<"|"<<tablero[2][2]<<endl;
    if(termino==true)
        cout<<"La ficha "<<ficha<<" perdio"<<endl;
    else
        cout<<"Empate!"<<endl;
}
