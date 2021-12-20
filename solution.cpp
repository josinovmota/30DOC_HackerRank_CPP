#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    // Declare a variable named 'input_string' to hold our input.
    // Declarar uma variavel de tipo string para receber o input
    string input_string; 
    
    // Read a full line of input from stdin (cin) and save it to our variable, input_string.
    //Ler o input e armazenar na variavel input_String
    getline(cin, input_string); 
    
    // Print a string literal saying "Hello, World." to stdout using cout.
    // Printar o que e pedido no desafio e dar um endl no final para quebrar a linha
    cout << "Hello, World." << endl;

    // TODO: Write a line of code here that prints the contents of input_string to stdout.
    // Printar o valor da variavel input_string
    cout << input_string;

    return 0;
}
