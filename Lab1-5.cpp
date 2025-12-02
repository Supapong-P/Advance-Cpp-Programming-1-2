#include <iostream>
using namespace std;

int palindromeCheck(string str, int start, int end){
    if (start >= end)
        return 1;
    if (str[start] != str[end])
        return 0;
    return palindromeCheck(str, start + 1, end - 1);
}

int main(){
    string str ;
    cout << "Enter a string: ";
    cin >> str;
    int length = str.length();
    if (palindromeCheck(str, 0, length - 1))
        cout << str << " is a palindrome." << endl;
    else
        cout << str << " is not a palindrome." << endl;
    return 0;
}