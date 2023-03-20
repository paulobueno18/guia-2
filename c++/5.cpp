#include <iostream>
using namespace std;
int main () {
	float costoconsumo, descuento, impuesto,total;
	cout <<"ingrese su costo de consumo: "; cin>>costoconsumo;
	if (costoconsumo<=100){
		descuento=costoconsumo*0.10;
	}
	else{
		descuento=costoconsumo*0.20;
	}
	impuesto=(costoconsumo-descuento)*0.19;
	total=costoconsumo-descuento+impuesto;
	
	cout<<"el monto descuento es: "<<descuento<<"/n";
	cout<<"el impuesto es : "<<impuesto<<"/n";
	cout<<"el importe a pagar es: "<<total;
	
	return 0;
}
