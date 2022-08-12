#include <iostream>
#include <math.h>

using namespace std;

int conversor(int decimal){
    int binario = 0;
    int residuo = 0;
    int digito = 0;

    while (decimal > 1){
        residuo = decimal % 2;
        decimal = (decimal - residuo) / 2;
        binario+= residuo * pow(10,digito);
        digito++;
    }
    binario+= decimal * pow(10,digito);
    return binario;
}

int main()
{
    int decimal = 0;
    cout << "Ingresa un numero decimal positivo: ";
    cin >> decimal;
    cout << "El numero " << decimal << " es " << conversor(decimal) << " en binario" << endl;
    return 0;
};