#include <iostream>
using namespace std;

int main(){

	int x=0, divisor=1, contador=0;
	cout << "Introduce un numero para saber si es primo o no: "; cin >> x;
	do{
		if ( x%divisor == 0 && ){
			contador++;
		}
		divisor++;
	}
	
	while(divisor <= x);

	if (contador == 2){
		cout << "El numero " << x << " es Primo" << endl;	
	}
	else{
		cout << "El numero " << x << " No es primo" << endl;	
	}
////// otra cosa rara que estoy creando aqui
}
