#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Calculo{
    public:
    int Dr, Mr, Yr, Dd, Md, Yd, Fine = 0, TaLascado = 0, ContB = 0, MeioLascado = 0, Lascadim = 0;
    Calculo(int Dr, int Mr, int Yr, int Dd, int Md, int Yd){
        this->Dr = Dr;
        this->Mr = Mr;
        this->Yr = Yr;
        this->Dd = Dd;
        this->Md = Md;
        this->Yd = Yd;
    }
    int MuitoLascado(){
        if(this->Yr > this->Yd){
            return 10000;
        }
        if(this->Yr == this->Yd && this->Mr > this->Md){
            return 500*(this->Mr - this->Md);
        }
        if(this->Yr == this->Yd && this->Mr == this->Md && this->Dr > this->Dd){
            return 15*(this->Dr - this->Dd);
        }
    return 0;
    }
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int Dr, Mr, Yr, Dd, Md, Yd;
    cin >> Dr >> Mr >> Yr >> Dd >> Md >> Yd;
    Calculo calc(Dr, Mr, Yr, Dd, Md, Yd);
    cout << calc.MuitoLascado();
    return 0;
}
