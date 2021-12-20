#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    
    // Declare second integer, double, and String variables.
    // Declarando as variaveis
    int my_i;
    double my_d;
    string my_s;
    
    // Read and save an integer, double, and String to your variables.
    // Lendo os valores do input
    cin >> my_i >> my_d;

    char dump;
    cin >> dump;

    char buffer[256];
    cin.getline(buffer, 256);
    my_s = buffer;

    // Print the sum of both integer variables on a new line.
    // Printar a soma dos 2 inteiros
    cout << i + my_i << endl;
    
    // Print the sum of the double variables on a new line.
    // Printar a soma das variaveis de tipo double em uma nova linha
    cout << fixed << setprecision(1) << d + my_d << endl;
    
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    // Contaternar e printar a string
    cout << s + my_s << endl;
    
    return 0;
}
