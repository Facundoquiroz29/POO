#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;
//EJERCICIO 1
int divisio_entera(int num1, int num2, int &r)
{
    int div = num1 / num2;
    r = num1 % num2;
    return div;
}
int facto(int n)
{
    if (n == 0) return 1;
    return n * facto(n - 1);
}
int hipot(int cat1, int cat2)
{
    int pot1 = pow(cat1,2);
    int pot2 = pow(cat2,2);
    int h = sqrt(pot1 + pot2);// raiz con funcion de raiz
    return h;
}
void intercambio(char &cadena1,char &cadena2)
{
    char aux;
    aux = cadena1;
    cadena1 = cadena2;
    cadena2 = aux;

}

// MENU
void menu_option1()
{
    int n1, n2, div, r;
    cout << "---------Division Entera---------\n";
    cout << "Ingrese el primer numero: "; cin >> n1;
    cout << "Ingrese el segundo numero: "; cin >> n2;
    div =  divisio_entera(n1, n2, r);
    cout << "Resultado:" << endl;
    cout << "Cociente: " << div << endl;
    cout << "Resto: "  << r << endl;
    cout << "---------------------------------\n";
};
void menu_option2()
{

    int n, f;
    cout << "--------------Factorial---------\n";
    cout << "Ingrese numero: ";
    cin >> n;
    f = facto(n);
    cout << "Resultado: " << f << endl;
    cout << "---------------------------------\n";
};

void menu_option3()
{
    int cat1, cat2, hip;
    cout << "--------------Hipotenusa---------\n";
    cout << "Ingrese cateto 1: "; cin >> cat1;
    cout << "Ingrese cateto 2: "; cin >> cat2;
    hip = hipot(cat1, cat2);
    cout << "Resultado: " << hip << endl;
    cout << "---------------------------------\n";
}
void menu_option4()
{
    char cadena1;
    char cadena2;
    cout << "Ingrese cadena 1: "; cin >> cadena1;
    cout << "Ingrese cadena 2: "; cin >> cadena2;
    intercambio(cadena1, cadena2);
    cout << endl;
    cout << "   -Cadena 1: " << cadena1 << endl;
    cout << "   -Cadena 2: " << cadena2 << endl;}

int main(int argc, char *argv[])
{
    int option = 0;
    do
    {
        cout << "+++++++++++++++++++++MENU+++++++++++++++++++++" << endl;
        cout << "   1. Division entera.\n";
        cout << "   2. Factorial de un numero.\n";
        cout << "   3. Calcular hipotenusa. \n";
        cout << "   4. Intercambio. \n";
        cout << "           . Ingrese opcion: ";
        cin >> option;
        switch (option)
        {
        case 1: menu_option1();
            break;
        case 2: menu_option2();
            break;
        case 3: menu_option3();
            break;
        case 4: menu_option4();
            break;
        };


        cout << "++++++++++++++++++++++++++++++++++++++++++++++" << endl;
    } while(option != 0);


    return 0;
}
