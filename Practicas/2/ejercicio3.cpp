#include <iostream>
#include <cstdlib>
#include <math.h>
#include <ctime>
 

int main(){

    using namespace std;
    
float a,b,aux;
float aleatorio;



cout << "Dame el intervalo para el valor aleatorio: ";
    cin >> a;
    cout << endl;
    cin >> b;

if(a>b){
aux=a;
a=b;
b=aux;
}

srand(time(0));


aleatorio = fmod(((float)rand()/RAND_MAX),b-a)+a;

cout << aleatorio;

return 0;
}

