#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <ctime>

using namespace std;

int main(){

const int n=6;

int v[n]={1,2,3,4,5,6};
int c[n];
int contador=0;


long i;
srand(time(0));


for( i = 0; i < 10000000 ; i++){


memcpy(c,v,sizeof c);

random_shuffle(v,v+n);

	if(memcmp(v,c,sizeof(v)) == 0)
		contador++;
		

} 
cout<< "Estan ordenadas " << contador <<" veces";
return 0;


}