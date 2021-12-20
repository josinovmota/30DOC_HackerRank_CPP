#include <iostream>

using namespace std;

int binario(int binary){
    int contador = 0, res = 0;
    while(binary != 0){
        if(binary & 1){
            res = res > ++contador ? res : contador; 
        }else{
            contador = 0;
        }
    binary >>= 1;    
    }
    return res;
}


int main(){
    
    int binary;
    cin >> binary;
    
    cout << binario(binary);
    return 0;
}
