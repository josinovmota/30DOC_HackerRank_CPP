#include <iostream>

using namespace std;

int main(){
    // Definir as variaveis
    int n;
    // Atribuir o valor do input a variavel
    cin >> n;
    // Fazer o loop
    for(int i = 1; i < 11; ++i){
        int j = (n * i);
        cout << n << " x " << i << " = " << j << endl;
    }

    return 0;
}
