#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

bool EsMultiplode3 (int n){
	return n%3==0;
}

int main (){
	int num; 
	string msg="No es multiplo";
	cout<<"Ingrese un numero: ";
	cin>>num;
	 
	 if (EsMultiplode3 (num)){
	 	msg= "El numero es multiplo";
	 	}
	cout<<msg<<endl;
	return 0;
}
