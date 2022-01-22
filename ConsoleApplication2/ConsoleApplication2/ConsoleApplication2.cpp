#include <Windows.h>
#include <iostream>
#include <vector>
using namespace std;

string encrypt(string input) {
    vector<char> word(input.begin(), input.end());
    string alphabet = "abcdefghijklmnopqrstuvwxyz";

    for (int i = 0; i < (int)input.length(); i++) {
        for (int j = 0; j < (int)alphabet.length(); j++) {
            if (word[i] == alphabet[j]) {
                word[i] = alphabet[(j + 3) % 26];

                break;
            }
        }
    }
    string str(word.begin(), word.end());
    return str;
}
 
int main() {

	string text = "Hallo, my name is Vlad ?";
	cout << text << endl;

	string texttencrypt = encrypt(text);
	cout << texttencrypt << endl;
}
