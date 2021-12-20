#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    //Criar um map de tamanho do primeiro cin com uma str e um int
    int t_dictionary, numero;
    string nome, nome2;
    
    cin >> t_dictionary;
    
    map<string,int>mapa;
    
    //Inserir com o .insert, o nome e seu respectivo numero
    for(int i = 0; i < t_dictionary; ++i){
        cin >> nome;
        cin >> numero;
        mapa.insert(pair<string,int>(nome,numero));
    }
    //Enquanto tiver nomes para pesquisar
    //eof = end of file (Vai saber se ainda existem inputs), no caso desse eof, vai significar "Enquanto nao estiver no fim"
    while(!cin.eof()){
        //Pegar o nome
        cin >> nome2;
        
        //Ver se ele esta no mapa
        auto k = mapa.find(nome2);
        
        //Se estiver no mapa, imprimir os valores
        if(k != mapa.end()){
            cout << k->first << "=" << k->second << endl;
        }else{
            //caso contrario, imprimir not found
            cout << "Not found" << endl;
        }
    
    
    }
    return 0;
}
