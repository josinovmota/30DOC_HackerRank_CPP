#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
class Book{
    protected:
        string title;
        string author;
    public:
        Book(string t,string a){
            title=t;
            author=a;
        }
        virtual void display()=0;

};

// Write your MyBook class here
class MyBook : Book{
    private:
    int price;
    public:
    //   Class Constructor
    //Criar um construtor que recebe todas as variaveis e a classe book
    MyBook(string title, string author, int price) : Book(title, author){
        this->price = price;
    }
    
    
    //   Function Name: display
    //Funcao com nome display
    void display(){
        cout << "Title: "  << this->title << endl << "Author: " << this->author << endl << "Price: " << this->price << endl;
    }
    //   Print the title, author, and price in the specified format.
    //
    // Write your method here
    
// End class
};
int main() {
    string title,author;
    int price;
    getline(cin,title);
    getline(cin,author);
    cin>>price;
    MyBook novel(title,author,price);
    novel.display();
    return 0;
}
