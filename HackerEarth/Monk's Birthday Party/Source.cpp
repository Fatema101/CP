#include<iostream>
#include<set>
using namespace std;
int main() {
	int T;
	cin >> T;
	while (T) {
		int n;
		string x;
		cin >> n;
		set<string>s;
		for (int i = 1; i <= n; i++) {
			cin >> x;
			s.insert(x);
		}
		for (auto p : s) {
			cout << p << endl;
		}
		T--;
	}
}