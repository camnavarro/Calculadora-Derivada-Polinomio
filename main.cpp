//
//  main.cpp
//  pre - parcial ejercicio 2
//
//  Created by Camilo Navarro on 9/27/19.
//  Copyright © 2019 Camilo Navarro. All rights reserved.
//

#include <iostream>
using namespace std;

//F I R M A S //
void leer(int coef[], int tam);
void derivada(int coef[], int coefd[], int indid[], int tam);



// M A I N //
int main(){
    
    cout << "Bienvenido a la calculadora de derivadas de un polinomio. Presione ENTER para continuar" << endl;
    cin.get();
    
    int tam;
    
    cout<< "Por favor teclee el indice mayor del polinomio" << endl;
    cin >> tam;
    
    int coef[tam], coefd[tam], indid[tam];
    
    leer(coef, tam);
    
    cin.get();
    
    cout << "Para derivar e imprimir el polinomio, teclee ENTER" << endl;
    cin.get();
    
    derivada(coef, coefd, indid, tam);
    return 0;
    
}

// F U N C I O N  L E E R //
void leer(int coef[], int tam)
{
    for(int i=0; i<=tam; i++)
    {
        cout << "Por favor teclee el coeficiente del indice "<< i << endl;
        cout << endl;
        cin >> coef[i];
    }
}

// F U N C I O N  D E R I V A R  E  I M P R I M I R //
void derivada(int coef[], int coefd[], int indid[], int tam)
{
    
    for(int i=0; i<= tam; i++)
    {
        coefd[i] = coef[i]*i;
        indid[i] = (i-1);
    }
    
    for(int i = 1; i<=tam; i++)
    {
        cout << "---------------" << endl;
        cout << "Coeficiente: "<< coefd[i]<< endl;
        cout << "Indice: " << indid[i] << endl;
        cout << "---------------" << endl;
        
    }
    cout << endl;
    cout << "P'(X) = " << endl;
    for(int i = 1; i<=tam; i++)
    {
        cout << coefd[i] << "x^" << indid[i] << " + " << endl;
        
    }
    
}
