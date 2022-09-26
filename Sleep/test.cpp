#include<iostream>
#include<windows.h>

using namespace std;

int main(){
    int contador = 0;
    system("Pause");
    while (true){
        Sleep(100);
        cout << "Ciclo " << contador << endl;
        contador++;
        if(contador%100==0)
            cout << '\a';
    }
    return 0;
};