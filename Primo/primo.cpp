#include <iostream>

using namespace std;

int primo(int n, int x)/*Bueno empeze por definir mi funcion con dos valores, n que era el numero a evaluar
y x que era mi divisor*/
{
    if(x==n){/*Luego mi caso base era que si x era igual a n que me retorne 1 ya que todo numero dividido por si mismo me da 1
            y ya era un divisor, por ejemplo 9 entre 9 me da 1, entonces 9 es divisible de 9, de si mismo*/
        return 1;
    }
    else{
        if(n%x==0){/*Si no se cumplia el caso base, hallabamos el resto de la division entera entre mi numero y x, y si el residuo
        era 0 entonces lo consideraba a ese x como un divisor*/

            return 1+primo(n,x+1);/*Luego retornaba mi funcion con un 1 y luego a ese 1 le sumaba la misma funcion pero
                con x aumentado en 1, para que asi me haga la contabilisacion de la cantidad de divisores*/
        }
        else{/*Si no cumplia mi condicion entonces retronaba 0(porque no era divisor de mi numero) sumando mi mismas
                funcion pero alterando x en +1*/
            return 0+primo(n,x+1);
        }
    }
}

int main()
{
    int x=1,divisores,n;
    cout << "Ingreso su numero ---> ";
    cin >> n;
    divisores=primo(n,x);/*Cree una variable donde almacenaba la cantidad de divisores*/

    if (divisores==2){/*Si mis divisores eran 2 entonces era primo ya que esos divispres serian
            1 y el mismo numero*/
        cout << "Es primo :)" << endl;
    }
    else{/*Si era menor o mayor que 2 entonces no era primo*/
        cout << "No es primo :c" << endl;
    }
    return 0;
}
