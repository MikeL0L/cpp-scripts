#include<iostream>
#include<string>
using namespace std;

class Book {
private:
    string title;
    string author;
    int yearpublish;
    
public:
    Book(string t, string a, int year) : title(t), author(a) {
        if (year > 0) {
            yearpublish = year;
        } else {
            cerr << "Invalid yearPublished. Setting to 0." << endl;
            yearpublish = 0;
        }
    }
    string getTitle() const { return title; }
    string getAuthor() const { return author; }
    int getYearPublished() const { return yearpublish; }
};
int main() {
    Book book1("A VISIT FROM THE GOON SQUAD", "JENNIFER EGAN", 2010);
    Book book2("THE THOUSAND AUTUMNS OF JACOB DE ZOET", "DAVID MITCHELL", 2011);
    Book book3("ALL MY PUNY SORROWS", "MIRIAM TOEWS", 2014); 

    cout << "Book 1: " << book1.getTitle() << "\nAuthor: " << book1.getAuthor() << "\nPublished in: " << book1.getYearPublished() << endl;
    cout << endl;
    cout << "Book 2: " << book2.getTitle() << "\nAuthor: " << book2.getAuthor() << "\nPublished in: " << book2.getYearPublished() << endl;
    cout << endl;
    cout << "Book 3: " << book3.getTitle() << "\nAuthor: " << book3.getAuthor() << "\nPublished in: " << book3.getYearPublished() << endl;

    return 0;
}
