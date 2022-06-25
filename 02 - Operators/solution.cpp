#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    // Definir as variaveis
    double tipPercent;
    double taxPercent;
    double mealCost;
    double totalCost;
    // Receber o Input nas variaveis
    cin>>mealCost>>tipPercent>>taxPercent;
    // Calcular o TipPercent
    tipPercent/=100.;
    // Calcular o TaxPercent
    taxPercent/=100.;
    // Calcular o custo total
    totalCost=mealCost+(mealCost*tipPercent)+(mealCost*taxPercent);
    // Printar o custo total
    cout << round(totalCost);
    return 0;
}
