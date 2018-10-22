#include <iostream>
#include <cstdlib>




int main(){

    using namespace std;
    
int a,b,aux;
int aleatorio;
cout << "Dame el intervalo para el valor aleatorio: ";
    cin >> a;
    cout << endl;
    cin >>b;

if(a>b){
aux=a;
a=b;
b=aux;
}

aleatorio=rand()%(b-a+1)+a;

cout << aleatorio;

return 0;
}

