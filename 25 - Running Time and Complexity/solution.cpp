#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool isPrime(int q){
    if(q == 0 || q == 1){
        return false;
    }
    int sqrt_q = sqrt(q);
    for(size_t n = 2; n <= sqrt_q; ++n){
        if(q % n == 0){
            return false;
        }  
    }
    return true;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int nq, q;
    
    cin >> nq;
    
    for(size_t i = 0; i < nq; ++i){
        cin >> q;
        if(isPrime(q) == false){
            cout << "Not prime" << endl;
        }else{
            cout << "Prime" << endl;
        }
    }
    return 0;
}
