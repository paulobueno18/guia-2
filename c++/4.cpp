#include <iostream>
using namespace std;
int main () {
	double saldo_AN,monto_T,saldo_AC;
	char tipo_MOVI;

	cout<<"ingrese saldo anterior: ",cin>>saldo_AN
	cout<<"ingrese tipo de movimiento retiro(R) o deposito(D):" ;cin>>tipo_MOVI;
	cout<<"ingrese el monto de la transaccion:";cin>>mont_T;


	if (tipo_MOVI=="R"&&tipo_MOVI=="r"){
		saldo_AC=saldo_AN-monto_T;
	}else{if(tipo_MOVI=="D"&&tipo_MOVI=="d"){
		saldo_AC=saldo_AN+monto_T;
	}else{
		saldo_AC=0
		cout<<"no existe este tipo de movimiento"<<endl;
	}
		
}
cout<<"el saldo actual es: "<<saldo_AC<<endl;
