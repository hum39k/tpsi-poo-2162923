#include <iostream> 

#include <stdio.h> 

#include <cmath>

using namespace std; 


// main() {
//     int x = 1;
//     while (x <= 5)
//     {
//         cout << x * 2<<"\n";
//         x++;
//     };

//     system("PAUSE");
    
// }

main() {

    // int i;

    // for (i = 1; i <= 5; i++)
    // {
    //     cout << i*2 <<"\n";
    // }
    
    // int c1;
    // int c2;
    // int h2;
    // float h;

    // cout << "Introduza valor para cateto1: ";
    // cin >> c1;
    // cout << "Introduza valor para cateto2: ";
    // cin >> c2;

    // h2 = c1*c1 + c2*c2;
    // h = sqrt(h2);

    // cout << h;

// -----------------------------------------------------------


    // float nota1;
    // float nota2;
    // float media;

    // cout << "Nota1: "; cin >> nota1;
    // cout << "Nota2: "; cin >> nota2;

    // media = (nota1 + nota2) / 2 ;

    // if (media >= 0 && media <9.5)
    // {
    //     cout << "Reprovado. Media de: " << media << "\n";

    // }

    // else if (media >= 9.5 && media <=20)
    // {
    //     cout << "Aprovado. Media de: " << media << "\n";
    // }

    // else{
    //     cout << "Nota não válida! \n";
    // }
    

//--------------------------------------------------------------------------

    // int valor1, valor2;

    // cout << "Insira o primeiro valor: ";
    // cin >> valor1;
    // cout << "Insira o segundo valor: ";
    // cin >> valor2;

    // if (valor1 > valor2)
    // {
    //     cout << valor1 << " é maior que " << valor2 << "\n";

    // }
    
    // else if (valor1 < valor2)
    // {
    //     cout << valor1 << " é menor que " << valor2 << "\n";
    // }
    
    // else{
    //     cout << "Ambos os valores são iguais! \n";
    // }

// ----------------------------------------------------------------

//     int valor1,valor2;
//     char op;
    
//     cout << "Insira o primeiro valor: "; cin >> valor1;
//     cout << "Insira o segundo valor: "; cin>> valor2;

//     cout << "Indique a operacao a realizar (+,-,*,/): "; cin >> op;


//     switch (op)
//     {
//     case '+':
//         cout << valor1 <<"+"<< valor2 <<"=" << valor1 + valor2 << "\n";
//         break;
//     case '-':
//         cout << valor1 <<"-"<< valor2 <<"=" << valor1 - valor2 << "\n";
//         break;
//     case '*':
//         cout << valor1 <<"*"<< valor2 <<"=" << valor1 * valor2 << "\n";
//         break;
//     case '/':
//         cout << valor1 <<"/"<< valor2 <<"=" << valor1 / valor2 << "\n";
//         break;
   
        
//     }

// -------------------------------------------------------------------------------------

int prod;

cout << "PRODUTOS DA SEMANA DO DESCONTO \n";
cout << "1 - Cereais Nestum, 2 - Sumo Tropical \n";
cout << "3 - Geleia Morango, 4 - Massa Italiana \n";
cout << "5 - Arroz Amarelo, 6 - Leite de Soja \n";
cout << "7 - Coca-Cola Zero, 8 - Couve de Bruxelas \n";

cout << "Insira o número do produto: "; cin >> prod;

switch (prod)
{
case 1:
    cout << "Desconto = 20% \n";
    break;
case 2:
    cout << "Desconto = 15% \n";
    break;
case 3:
    cout << "Desconto = 20% \n";
    break;
case 4:
    cout << "Desconto = 10% \n";
    break;
case 5:
    cout << "Desconto = 10% \n";
    break;
case 6:
    cout << "Desconto = 20% \n";
    break;
case 7:
    cout << "Desconto = 15% \n";
    break;
case 8:
    cout << "Desconto = 5% \n";
    break;

}


    system("PAUSE");
    
}