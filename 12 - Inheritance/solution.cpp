#include <iostream>
#include <vector>

using namespace std;


class Person{
	protected:
		string firstName;
		string lastName;
		int id;
	public:
		Person(string firstName, string lastName, int identification){
			this->firstName = firstName;
			this->lastName = lastName;
			this->id = identification;
		}
		void printPerson(){
			cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n"; 
		}
	
};

class Student :  public Person{
	private:
		vector<int> testScores;
	public:
        /*	
        *   Class Constructor
        *   
        *   Parameters:
        *   firstName - A string denoting the Person's first name.
        *   lastName - A string denoting the Person's last name.
        *   id - An integer denoting the Person's ID number.
        *   scores - An array of integers denoting the Person's test scores.
        */
        // Write your constructor here
        Student(string firstName, string lastName, int id, vector<int> scores) : Person(firstName, lastName, id){
            this->testScores = scores;
        }
            
        /*	
        *   Function Name: calculate
        *   Return: A character denoting the grade.
        */
        // Write your function here
        char calculate(){
        /* Minha versão =D
            for(int i = 0; i < testScores.size(); ++i){
                int quantidade = testScores.size();
                int val = testScores[i];
                double div = (div + val);
                double uau = (uau + div);
                if(uau >= 90 && uau <= 100){
                    vf = 'O';
                }else if (uau >= 80 && uau < 90){
                    vf = 'E';
                }else if (uau >= 70 && uau < 80){
                    vf = 'A';
                }else if (uau >= 55 && uau < 70){
                    vf = 'P';
                }else if (uau >= 40 && uau < 55){
                    vf = 'D';
                }else if (uau < 40){
                    vf = 'T';
                }
            }
        return vf;
        }
        */
            int media = 0;
            for(int i = 0; i < this->testScores.size(); ++i){
                media += this->testScores[i];
            }
            media /= this->testScores.size();
            if(media >= 90){
                return 'O';
            }if (media >= 80){
                return 'E';
            }if (media >= 70){
                return 'A';
            }if (media >= 55){
                return 'P';
            }if (media >= 40){
                return 'D';
            }
            
            return 'T';
        }
};

int main() {
	string firstName;
  	string lastName;
	int id;
  	int numScores;
	cin >> firstName >> lastName >> id >> numScores;
  	vector<int> scores;
  	for(int i = 0; i < numScores; i++){
	  	int tmpScore;
	  	cin >> tmpScore;
		scores.push_back(tmpScore);
	}
	Student* s = new Student(firstName, lastName, id, scores);
	s->printPerson();
	cout << "Grade: " << s->calculate() << "\n";
	return 0;
}
