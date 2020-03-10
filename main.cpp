#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

double serieWallis(int n){
    double resultado = 0.0;
    double numerador = -1.00;
    // recorrido de 0 a n
    cout << "|i|parcial|tiempo|\n_____________"<<endl;
    for(int i = 0; i < n; i++){
        if(numerador==-1.00)    numerador = 1.00;
        else numerador = -1.00;

        double denominador = (2*i) + 1;
        double respuesta_parcial = numerador/denominador;
        cout << fixed << setprecision(2);
        cout << "|" <<i << "\t|" << respuesta_parcial<< "\t|0.000s|" << endl;
        resultado += respuesta_parcial;
    }
    cout << " ______________ "<<endl;
    cout << "resultado = " << resultado << endl;
}

int main() {
    int n;
    cin >> n;
    serieWallis(n);

    return 0;
}