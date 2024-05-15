#include <iostream>
using namespace std;

int main ()
{
    float alfa,  beta, gamna;
    cout << "Ingrese  el primer angulo: \n ";
    cin >> alfa;

    cout << "Ingrese el segundo angulo: \n";
    cin >> beta;

    if (alfa + beta <=180)
    {
        gamna=180- alfa - beta;
        cout << "El tercer angulo es: " << gamna << "\n";
    }

    else if (alfa +beta >180)
    {
        cout <<"Los datos ingresados son incorrectos ";
    }

    
    return 0;
}