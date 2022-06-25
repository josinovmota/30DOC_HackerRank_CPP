#include <iostream>

using namespace std;

int factorial(int fatorial){
    
    return fatorial <= 1 ? 1 : fatorial * factorial(fatorial - 1);
}

int main(){
    
    int fatorial;
    cin >> fatorial;
    
    cout << factorial(fatorial);
    
    return 0;
}
