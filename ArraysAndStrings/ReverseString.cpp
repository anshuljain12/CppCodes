#include<iostream>
#include<string>
using namespace std;

string reverseString(string s){
	int i = 0, j=s.length()-1;
	while (i <= j){
		char c = s[i];
		s[i] = s[j];
		s[j] = c;
		i++; j--;
	}
	return s;
}
int main(){
	string s="anshul";
	cout << reverseString(s);
	cin.ignore();
	return 0;
}
