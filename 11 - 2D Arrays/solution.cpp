#include <iostream>
#include <vector>

using namespace std;

int main(){
    //Criei o vetor inicial
    vector<vector<int>> arr;
    //Ler 6 linhas da matriz (Exterior)
    for(int i = 0; i < 6; ++i){
    vector<int> linha;    
        //Ler 6 colunas da matriz da linha i (Interior)
        for(int n = 0; n < 6; ++n){
            int valor;
            cin >> valor;
            linha.push_back(valor);   
        }
    arr.push_back(linha);
    }
    
    int max = -70;
    for(int p = 1; p < 5; ++p){
        //A partir do meio do hourglass, ele vai fazer a soma de cada posicao ao redor, com excessao dos ladinhos
        for(int l = 1; l < 5; ++l){
            int count = arr[p - 1][l - 1] + arr[p - 1][l] + arr[p - 1][l + 1] + 
            arr[p][l] + arr[p + 1][l - 1] + arr[p + 1][l] + arr[p + 1][l + 1];
            max = max > count ? max : count;
        }
    }
    cout << max << endl;
    return 0;
}
