#include<iostream>
#include<string>
#include<unordered_map>
#include<algorithm>
using namespace std;
/*
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
bool checkAnagramHashMap(string s1, string s2){
	if (s1.length() != s2.length())
		return false;
	unordered_map<char, int> m;
	int count1 = 0, count2 = 0;
	unordered_map<char, int>::iterator it;
	for (int i = 0; i < s1.length(); i++){
		it = m.find(s1[i]);
		if (it != m.end())
			it->second++;
		else{
			m.insert(make_pair(s1[i], 1));
			count1++;
		}
	}
	for (int i = 0; i < s2.length(); i++){
		it = m.find(s2[i]);
		if (it == m.end())
			return false;
		it->second--;
		if (it->second == 0)
			count2++;
	}
	if (count1 == count2)
		return true;
	else
		return false;
}
vector<string> anagramsInListOfWords(vector<string> v, string word){
	unordered_map<string, vector<string>> m;
	unordered_map<string, vector<string>>::iterator it;
	for (int i = 0; i < v.size(); i++){
		string s = v[i];
		sort(s.begin(), s.end());
		it = m.find(s);
		if (it == m.end()){
			vector<string> vec;
			vec.push_back(v[i]);
			m.insert(make_pair(s, vec));
		}
		else
			it->second.push_back(v[i]);
	}
	sort(word.begin(), word.end());
	it = m.find(word);
	vector<string> vec;
	if (it!=m.end())
		return it->second;
	return vec;
}
vector<string> allAnagramsInListOfWords(vector<string> words){
	unordered_map<string, vector<string>> m;
	unordered_map<string, vector<string>>::iterator it;
	for (int i = 0; i < words.size(); i++){
		string s = words[i];
		sort(s.begin(), s.end());
		it = m.find(s);
		if (it == m.end()){
			vector<string> vec;
			vec.push_back(words[i]);
			m.insert(make_pair(s, vec));
		}
		else
			it->second.push_back(words[i]);
	}
	it = m.begin();
	vector<string> res;
	while (it != m.end()){
		vector<string> v = it->second;
		if (v.size() > 1){
			for (int i = 0; i < v.size(); i++)
				res.push_back(v[i]);
		}
		it++;
	}
	return res;
}
int main(){
	cout << checkAnagram("cat","act") << "\n";
	cout << checkAnagram("cat", "acr") << "\n";
	cout << checkAnagram("cata", "act") << "\n";
	cout << checkAnagramHashMap("cat", "act") << "\n";
	cout << checkAnagramHashMap("cat", "acr") << "\n";
	cout << checkAnagramHashMap("cata", "act") << "\n";
	vector<string> v;
	v.push_back("cat");
	v.push_back("cta");
	v.push_back("act");
	v.push_back("tac");
	v.push_back("dog");
	v.push_back("gdo");
	v.push_back("ans");
	cout << "All anagrams in list of words: \n";
	vector<string> allAnagrams = allAnagramsInListOfWords(v);
	for (int i = 0; i < allAnagrams.size(); i++)
		cout << allAnagrams[i] << "\n";
	cout << "Anagrams of dog: \n";
	v = anagramsInListOfWords(v, "dog");
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << "\n";
	cin.ignore();
	return 0;
}
*/