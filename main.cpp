#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    int n,x,aux=0,aux1=0,aux2=0,sum;
    float p1,p2,p3,a;
    char y;
    cin>>n;
    while(n>=1){
        cin>>x>>y;
        if(y=='C') aux=aux+x;
        else if(y=='R') aux1=aux1+x;
        else aux2=aux2+x;
        n=n-1;
    }
    sum = aux+aux1+aux2;
    a = aux+aux1+aux2;
    p1=(aux/a)*100;
    p2=(aux1/a)*100;
    p3=(aux2/a)*100;

    cout <<"Total: "<<sum<< " cobaias" <<endl;
    cout <<"Total de coelhos: "<<aux<< endl;
    cout <<"Total de ratos: "<<aux1<< endl;
    cout <<"Total de sapos: "<<aux2<< endl;
    cout <<"Percentual de coelhos: "<<std::fixed << std::setprecision(2)<<(roundf(p1*100.00)/100.00)<<" %"<<endl;
    cout <<"Percentual de ratos: "<<std::fixed << std::setprecision(2)<<(roundf(p2*100.00)/100.00)<<" %"<<endl;
    cout <<"Percentual de sapos: "<<std::fixed << std::setprecision(2)<<(roundf(p3*100.00)/100.00)<<" %"<<endl;
    return 0;
}
