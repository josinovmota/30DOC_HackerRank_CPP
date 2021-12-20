#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    // Definir as variaveis
    int n_palavras;
    // Atribuir o valor do input a variavel
    cin >> n_palavras;
    // Criar o loop for
    for(int palavra = 0; palavra < n_palavras; ++palavra){
        string str;
        
        cin >> str;
        
        int t_palavra = str.size();
        int t_array = t_palavra / 2 + 2;
        
        char ar_par[t_array], ar_impar[t_array];
        int ar_par_pos = 0, ar_impar_pos = 0;
        
        for(int i = 0; i < t_palavra; ++i){
            // Obter a letra
            char letra = str[i];
            if(i & 1){
                ar_impar[ar_impar_pos] = letra;
                ++ar_impar_pos;
            }else{
                ar_par[ar_par_pos] = letra;
                ++ar_par_pos;
                
            }   
            
        }
        ar_par[ar_par_pos] = 0;
        ar_impar[ar_impar_pos] = 0;
        
        string par(ar_par);
        string impar(ar_impar);
        cout << par << " " << impar << endl;
    }
    
    return 0;
}

ar_impar[ar_impar_pos] = letra;
                ++ar_impar_pos;
