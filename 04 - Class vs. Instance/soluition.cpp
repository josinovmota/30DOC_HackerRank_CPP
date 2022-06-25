using namespace std;
#include <iostream>
    // Criar a classe Person
    class Person{
        public:
            // Definir as variaveis
            int age;
            // Fazer o metodo construtor
            Person(int initialAge){
                if(initialAge < 0){
                    age = 0;
                    cout << "Age is not valid, setting age to 0." << endl;
                }else{
                    age = initialAge;
                }
            }
            // Fazer o metodo AnosPassados
            void yearPasses(){
                ++age;
            }
            // Fazer o metodo "EuSouVelho?"
            void amIOld(){
                if(age < 13){
                    cout << "You are young." << endl;
                }else if(age >= 13 && age < 18){
                    cout << "You are a teenager." << endl;
                }else{
                    cout << "You are old." << endl;
                };
            };
            
    };
    
int main(){
    int t;
	int age;
    cin >> t;
    for(int i=0; i < t; i++) {
    	cin >> age;
        Person p(age);
        p.amIOld();
        for(int j=0; j < 3; j++) {
        	p.yearPasses(); 
        }
        p.amIOld();
      
		cout << '\n';
    }

    return 0;
}
