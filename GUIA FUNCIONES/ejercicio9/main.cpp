#include <iostream>

using namespace std;

/*Ejercicio 9
La serie de Fibonacci se calcula de la forma siguiente: 1 + 1 + 2 + 3 + 5 + 8 + 13 +…
Donde cada término i se calcula sumando los 2 anteriores: ti = ti-1 + ti-2,
 y los 2 términos iniciales valen 1.
Escriba una función recursiva para calcular la serie de Fibonacci y luego escriba un programa
cliente que la utilice.  */

int fibo_imperativo(int num){  //1
    int aux1=1, aux2=0, total=0;
    if (num == 0 || num == 1) {
        return 1;
    }
    for(int i=2; i<=num; i++){
        total = aux1 + aux2;
        aux2=aux1;
        aux1=total;
        //cout<<total<<" + "; Para que muestre algo parecido...
    }
    return total;
}

int fibo_recursivo(int n){
    if (n == 0){
        return 0;
    } else if(n == 1) {
        return 1;
    } else {
        return fibo_recursivo(n - 1) + fibo_recursivo(n - 2);
    }
}

int main()
{
    int numero;
    cout<<"Ingrese un nro: "; cin>>numero;
    cout<<fibo_recursivo(numero)<<endl;
    return 0;
}
