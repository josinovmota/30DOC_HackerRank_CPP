#include <iostream>

using namespace std;

int main(){
    // Definir as variaveis
    int a;
    // Receber o input
    cin >> a;
    // Printar Weird e Not Weird para um dado valor de A
    if (a % 2 != 0){
        cout << "Weird";
    }else if (a <= 5 && a >= 2){
        cout << "Not Weird";
    }else if (a <= 20 && a >= 6){
        cout << "Weird";
    }else if (a >= 20){
        cout << "Not Weird";
    }

}
