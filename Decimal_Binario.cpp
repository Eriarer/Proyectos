#include <iostream>
#include <math.h>

using namespace std;

int division(int decimal);

int main(){
    int decimal = 0;
    int binario = 1;

    cout << "Ingresa un numero decimal positivo: ";
    cin >> decimal;
    cout << division(decimal) <<  endl;
    //binario = division(decimal);
    //cout << "El numero " << decimal << " es " << division(decimal) << " en binario" << endl;
    return 0;
};

int division(int decimal){
    int residuo = 0;
    int memoria = 1;
    int binario = 0;

    while (decimal > 1){
        residuo = decimal % 2;
        decimal = decimal / 2;
        cout << "su mitad es " << decimal << " Y su residuo es " << residuo << endl;
        if (residuo == 0)
        {
            memoria = memoria * 10;
        }else{
            memoria = (memoria * 10) + 1;
        }
        cout << "Memoria: " << memoria << endl; 
    }

    if (decimal > 0)
    {
        memoria = (memoria * 10) + 1;
    }else{
        memoria = 0;
    }

    while (memoria >1){
        binario = memoria % 10;
        memoria = memoria / 10;
    }
    return binario;
}