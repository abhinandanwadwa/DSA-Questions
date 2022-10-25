#include<iostream>
using namespace std;

bool isVowel(char ch) {
    char vowels[10] = {'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u'};
    for (int i=0; i<10; i++) {
        if (vowels[i] == ch) {
            return true;
        }
    }
    return false;
}

int main() {
    int t;
    cin >> t;
    for (int cs=1; cs<=t; cs++) {
        string kingdom;
        cin >> kingdom;
        int n = kingdom.size();
        if (isVowel(kingdom[n-1])) {
            cout << "Case #" << cs << ": " << kingdom << " is ruled by Alice." << endl;
        }
        else {
            if (kingdom[n-1] == 'y' || kingdom[n-1] == 'Y') {
                cout << "Case #" << cs << ": " << kingdom << " is ruled by nobody." << endl;
            }
            else {
                cout << "Case #" << cs << ": " << kingdom << " is ruled by Bob." << endl;
            }
        }
    }
    return 0;
}