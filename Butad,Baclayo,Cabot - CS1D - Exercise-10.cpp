#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isAnagram(const string& s1, const string& s2) {
    if (s1.length() != s2.length())
        return false;
   
    string sorted_s1 = s1;
    string sorted_s2 = s2;
    sort(sorted_s1.begin(), sorted_s1.end());
    sort(sorted_s2.begin(), sorted_s2.end());
   
    return sorted_s1 == sorted_s2;
}

int main() {
    string word1, word2;
   
    cout << "Enter the first word: ";
    cin >> word1;
   
    cout << "Enter the second word: ";
    cin >> word2;
   
    if (isAnagram(word1, word2))
        cout << "The words '" << word1 << "' and '" << word2 << "' are anagrams." << endl;
    else
        cout << "The words '" << word1 << "' and '" << word2 << "' are not anagrams." << endl;
   
    return 0;
}
