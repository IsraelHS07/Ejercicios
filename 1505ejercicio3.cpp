#include <iostream>
using namespace std;
int main()
{
    float angulo;
    cout << "Ingrese  el angulo : \n";
    cin >> angulo;
    
    
    if (angulo <90)
    {
        cout << "El angulo es Agudo \n";
    }

    else if (angulo > 90)
    {
        cout << "El angulo es Obtuso \n";
    }
    
    
    else if (angulo= 90)
     {
        cout << "El angulo es Recto \n";
    }

    return 0;
    
}