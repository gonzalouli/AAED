#include <iostream>
#include <cstdlib>




int main(){

    using namespace std;
    
int uno=0, dos=0, tres=0, cuatro=0, cinco=0, seis=0;
int aleatorio;

cout << "La probabilidad de cada una de las tiradas seran...";
    
long i;

     for( i=1;i<=10000000;i++){

        aleatorio=rand()%(6+1)+1;
        
        switch(aleatorio){
            case 1: uno++;
                break;
            case 2: dos++;
                break;
            case 3: tres++;
                break;
            case 4: cuatro++;
                break;
            case 5: cinco++;
                break;
            case 6: seis++;
                break;
         }
    }

cout << "\nP-uno: "<<(float)uno/i<<"%";
cout << "\nP-dos: "<<(float)dos/i<<"%";
cout << "\nP-tres: "<<(float)tres/i<<"%";
cout << "\nP-cuatro: "<<(float)cuatro/i<<"%";
cout << "\nP-cinco: "<<(float)cinco/i<<"%";
cout << "\nP-seis: "<<(float)seis/i<<"%";

return 0;
}

