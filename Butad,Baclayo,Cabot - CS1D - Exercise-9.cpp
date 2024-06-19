#include <iostream>
#include <string>
using namespace std;

class RememberKdrama {
private:
    string kdrama_name;
    int episode;
    int last_minute;

public:
    RememberKdrama() {
        kdrama_name = "";
        episode = 0;
        last_minute = 0;
    }

    void setKdramaInfo(const string& name, int ep, int minute) {
        kdrama_name = name;
        episode = ep;
        last_minute = minute;
    }

    void modifyKdramaInfo(const string& name = "", int ep = 0, int minute = 0) {
        if (!name.empty()) {
            kdrama_name = name;
        }
        if (ep > 0) {
            episode = ep;
        }
        if (minute > 0) {
            last_minute = minute;
        }
    }

    void displayInfo() {
        cout << "KDrama: " << kdrama_name << ", Episode: " << episode << ", Last Minute: " << last_minute << endl;
    }
};

int main() {
    RememberKdrama kdramaInfo;
    
    string name;
    int ep, minute;
    cout << "My Top 3 Kdramas" << endl;
    cout << "Enter 1st KDrama name: ";
    cin >> name;
    cout << "Enter episode number: ";
    cin >> ep;
    cout << "Enter last minute watched: ";
    cin >> minute;
    
    kdramaInfo.setKdramaInfo(name, ep, minute);
    kdramaInfo.displayInfo();
    
    cout << endl;
    cout << "Enter 2nd KDrama name: ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter new episode number: ";
    cin >> ep;
    cout << "Enter new last minute watched: ";
    cin >> minute;
    
    kdramaInfo.modifyKdramaInfo(name, ep, minute);
    kdramaInfo.displayInfo();
    
    cout << endl;
    cout << "Enter 3rd KDrama name: ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter new episode number: ";
    cin >> ep;
    cout << "Enter new last minute watched: ";
    cin >> minute;
    
    kdramaInfo.modifyKdramaInfo(name, ep, minute);
    kdramaInfo.displayInfo();

    return 0;
}