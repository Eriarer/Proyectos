#include<iostream>
#include<windows.h>

using namespace std;

int main(){
    int contador = 0;
    system("Pause");
    while (true){
        Sleep(50);
        cout << "Ciclo " << contador << endl;
        contador++;
        if(contador%100==0)
            Beep(1000,100);
    }
    return 0;
};