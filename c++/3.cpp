#include <iostream>
using namespace std;
int main () {
	int lado, area;
	string tama;
	cout <<"ingrese el lado de un cuadrado"; cin>>lado;
	area=lado*lado;
	cout<<"el area del cuadrado es: "<<area<<endl;
	if (area<100){
		tama="cuadrado pequeño";
	}
	else {
		tama="cuadrado grande";
	}
		cout<<"es un "<<tama;
		
	return 0;
	
	}
