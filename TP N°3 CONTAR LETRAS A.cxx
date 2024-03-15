#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int contarLetraA(string f) {
    int contador = 0;
    
    for (int i=0;i< f.size();i++) {
        char letra = f[i];
        
        if (letra=='A'|| letra=='a')
            contador++;
        }
        return contador;
    }
    


int main() {
    string frase;
    cout<< "Ingrese una frase: ";
    getline(cin, frase);

    int cantidada = contarLetraA(frase);
    cout << "La cantidad de letras 'a' en la frase es: " << cantidada << endl;

    return 0;
}