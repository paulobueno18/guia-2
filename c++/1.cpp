#include <iostream>
using namespace std;
int main () {
	int lado, area;
	string peque;
	cout <<"ingrese el lado de un cuadrado: "; cin>>lado;
	area=lado*lado;
	cout<<"el area del cuadrado es: "<<area<<endl;
	if (area<100) {
		peque="cuadrado pequeño";
		cout<<"es un "<<peque;
	}
	
	
	return 0;
}
