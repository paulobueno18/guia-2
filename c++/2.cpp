#include <iostream>
using namespace std;
int main () {
	int hora,minuto,duramin;
	float costo;
	cout <<"ingresar los minutos de la llamada"; cin>>minuto;
	cout <<"ingresar las horas de la llamada"; cin>>hora;
	duramin=(hora*60);
	if (duramin<=3){
		costo=0.5;
	}
	else{  
	costo=((duramin-3)*0.1)+0.5;
	}
	cout <<"la duracion de la llamada en minutos es:" <<duramin<< "y el costo de la llamada es "<<costo;
	return 0;
}
	
	
