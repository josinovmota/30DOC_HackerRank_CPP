#include <iostream>
#include <vector>

using namespace std;

int main(){
    // Criar o vetor
    vector<int> uau;
    // Inicializar as variaveis
    int noi, n;
    // Atribuir o primeiro input a noi
    cin >> noi;
    // Fazer o loop para inserir o resto do input no vetor uau
    for(int i = 0; i < noi; ++i){
        cin >> n;
        uau.push_back(n);
    }
    // Fazer o loop para dar print nos indices de uau em ordem decrescente
    for(int n = noi-1; n >= 0; --n){
        cout << uau[n] << " ";
    }
    return 0;
}
