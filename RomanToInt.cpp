#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int romanToInt(string s){
    int answer = 0;
    string str =s;
    
    unordered_map<char, int> roman;
    roman['I'] = 1;
    roman['V'] = 5;
    roman['X'] = 10;
    roman['L'] = 50;
    roman['C'] = 100;
    roman['D'] = 500;
    roman['M'] = 1000; 

    for(int i = str.size()-1; i >= 0; --i) {
        if(roman[str[i]] < roman[str[i+1]]) {
            answer -= roman[str[i]];
        }
        else {
            answer += roman[str[i]];
        }
    }
    return answer;
}


int main(){

    string s;
    cout << "Enter The Roman Numerals(1-3999):" << endl;   //case sensitive. Has to be capitalized
    cin >> s;
    cout << romanToInt(s) << endl;

    return 0;   
}