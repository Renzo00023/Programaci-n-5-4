#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
using namespace std;

int hallarMayor (int a, int b, int c){
	return max (a, max(b, c));
	
	}
	int main (){
		int a;
		int b;
		int c;
		
		cout<<"Ingrese 3 numeros: ";
		cin>>a>>b>>c;
		
		
		cout<<hallarMayor(a, b, c);
		
		}