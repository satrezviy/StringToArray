#include <iostream>

using namespace std;

string sInput = "";
wstring wInput = L"Profile";

void Convert(string &s);
void Convert(wstring w);

int main() {
	//Convert(sInput);
	Convert(wInput);
}

void Convert(string &s) {
	string res = "{ ";
	for (size_t i = 0; i < s.size(); i++) {
		string temp = "'";
		if (s[i] == '\\') temp += s[i];
		temp += s[i];
		temp += "', ";
		res += temp;
	}
	res[res.size() - 2] = ' ';
	res[res.size() - 1] = '}';
	cout << res << "\n";
}
void Convert(wstring w) {
	wstring res = L"{ ";
	for (size_t i = 0; i < w.size(); i++) {
		wstring temp = L"L'";
		if (w[i] == '\\') temp += w[i];
		temp += w[i];
		temp += L"', ";
		res += temp;
	}
	res[res.size() - 2] = L' ';
	res[res.size() - 1] = L'}';
	wcout << res << L"\n";
}