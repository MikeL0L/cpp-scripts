#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string fileName = "FinExercise13.txt";
    ifstream inputFile(fileName);

    if (!inputFile) {
        cout << "File does not exist." << endl;
        return 1;
    }

   
    int count = 0;
    char ch;
    while (inputFile.get(ch)) {
        count++;
    }

    inputFile.close();
    ofstream outputFile(fileName, ios::app);
    if (!outputFile) {
        cout << "Error in opening file for appending." << endl;
        return 1;
    }

    outputFile << "\nTotal characters in the file: " << count << endl;
    outputFile.close();

    cout << "Count of characters appended to file." << endl;
    cout << "\nTotal characters in the file: " << count << endl;
    
    return 0;
}

