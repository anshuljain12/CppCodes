#include<iostream>
#include<string>
using namespace std;

bool checkAnagram(string s1, string s2){
	if (s1.length() != s2.length())
		return false;
	int a[256] = {0};
	int count1 = 0, count2 = 0;
	for (int i = 0; i < s1.length(); i++){
		if (a[s1[i]] == 0)
			count1++;
		a[s1[i]]++;
	}
	for (int i = 0; i < s2.length(); i++){
		if (a[s2[i]] == 0)
			return false;
		a[s2[i]]--;
		if (a[s2[i]] == 0)
			count2++;
	}
	if (count1 == count2)
		return true;
	else
		return false;
}
int main(){
	cout << checkAnagram("cat","act") << "\n";
	cout << checkAnagram("cat", "acr") << "\n";
	cout << checkAnagram("cata", "act") << "\n";
	cin.ignore();
	return 0;
}
