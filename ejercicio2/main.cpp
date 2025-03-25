#include <iostream>
using namespace std;

float fact_final(float impbruto)
{
    float impfinal;
    float iva, desc;
    //iva
    iva = impbruto * 0.13;
    impfinal = impbruto + iva;
    //imp > 50
    if(impbruto > 50)
    {
        desc = impbruto * 0.05;
        impfinal-=desc;
    }
    return impfinal;
}

int main()
{
    float f;
    f = fact_final(49);
    cout << f << endl;
    return 0;
}
