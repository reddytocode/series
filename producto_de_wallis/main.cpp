#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

double serieWallis(int n){
    double resultado = 0.0;
    double numerador = -1.00;
    // recorrido de 0 a n
    cout << "|i|parcial|tiempo|\n_____________"<<endl;
    for(int i = 1; i <= n; i++){
        numerador = 2*i;

        double denominador1 = (2*i) - 1;
        double denominador2 = (2*i) + 1;
        double respuesta_parcial = (numerador/denominador1)* (numerador/denominador2);

        cout << fixed << setprecision(2);
        cout << "|" <<i << "\t|" << respuesta_parcial<< "\t|0.000s|" << endl;
        resultado += respuesta_parcial;
    }
    cout << " ______________ "<<endl;
    cout << "resultado = " << resultado << endl;
}

unsigned long long factorial(int n){
    unsigned long long res = 1;
    for(unsigned long long i = 1; i<=n; i++)   res *= i;
    return res;
}

int main() {
    int n;
    cin >> n;
    //serieWallis(n);
    cout << factorial(n) << endl;

    return 0;
}