#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

bool wayToSort(int i, int j) { return i > j; };
int main(){
	int a[] = {4,2,5,2,5,7,3,5,1};
	char c[] = { 'a', 'n', 's', 'h', 'u', 'l' };
	string s[] = { "anshul", "ankit", "ayush", "mumal", "rahul", "moulik", "anshuk" };
	sort(a,a+9);
	for (int i = 0; i < 9; i++)
		cout << a[i] << " ";
	sort(c,c+6);
	for (int i = 0; i < 6; i++)
		cout << c[i];
	sort(s, s + 7);
	for (int i = 0; i < 7; i++)
		cout << "\n" << s[i];
	cout << "\n";
	sort(a, a + 9,wayToSort);
	for (int i = 0; i < 9; i++)
		cout << a[i] << " ";
	cin.ignore();
}
