#include <iostream> 

#include <stdio.h> 

using namespace std; 

 

main(){ 

int nota; 

cout <<"Digite a nota: ";cin >> nota; 

 

if (nota < 0) cout << "Nota nao valida /n"; 

 

else if (nota < 10) cout << "Reprovado /n"; 

else if (nota < 14) cout << "Suficiente /n"; 

else if (nota < 18) cout << "Bom /n"; 

else if (nota <= 20) cout << "Muito Bom /n"; 

else cout << "Nota nao valida /n"; 

 

system("PAUSE"); 

} 


int x;


main(){
    while(x<=5){

        cout << x*2;
        x++;
        
    }

}


main(){
    int i;
    for(i=1;i<=5;1++){
        cout << x*2;
    }
}