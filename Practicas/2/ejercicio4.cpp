
#include <iostream>
#include <cstdlib>
#include <math.h>
#include <ctime>
  
  
int main(){
  
using namespace std;

double acumulado=0, y=0, media=0;
 
 cout << "Intervalo [0,1]";
 
 long i;
 srand(time(0));

 
     for( i=1 ; i <= 10000000 ; i++){

         y= 4*sqrt( 1-pow( (double)rand()/RAND_MAX ,2.0 )) ;

         acumulado+=y;

                 

 }
 
 media=acumulado/i;
 
 cout << "\nLa media de los 10000000 numeros semialeatorios con los valores y=4*(1-x²)⁽-1/2) es " << media;
 
 return 0;
 }
 

