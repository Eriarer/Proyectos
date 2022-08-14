#include<iostream>

using namespace std;

int convertorbinario(int decimal);

int main(){
    int decimal=0;
    int binario=0;
    cout << "Inserte un numero entero positivo: ";
    cin >> decimal;
    binario = convertorbinario(decimal);
    cout << endl << "El numero " << decimal << " en binario es " << binario << endl;
    return 0;
}

int convertorbinario(int decimal){
    int binario=0;
    if(decimal==0){
        return 0;
    }
    else{
        binario = convertorbinario(decimal/2);
        return (binario * 10 + decimal%2);
    }
}
