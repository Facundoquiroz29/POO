#include <iostream>
using namespace std;

float interesCompuesto(int meses, float interesMensual, float monto);

int main()
{
    int n;
    float i, final, c;
    cout<<"Ingrese monto inicial: $"; cin>>c;
    cout<<"Ingrese meses: "; cin>>n;
    cout<<"Ingrese interes mensual: %"; cin>>i;
    final=interesCompuesto(n, i, c);
    cout<<"Obtendra al final: $"<<final<<endl;

    return 0;
}


float interesCompuesto(int meses, float interesMensual, float monto){
    float auxiliar;
    if((meses>=2)&&(meses<=24)){
        for(int i=0; i<meses; i++){
            auxiliar=monto*interesMensual;
            monto+=auxiliar;
        }
    }
    return monto;
}
