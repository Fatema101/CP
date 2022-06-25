#include<iostream>
#include<map>
#include<set>
using namespace std;
int main() {
	int N;
	cin >> N;
	int a;
	string b;
	map<int, multiset<string>, greater<int> >m;
	for (int i = 1; i <= N; i++) {
		cin >> b >> a;
		m[a].insert(b);
	}
	/*auto p = --s.end();
	for (; p != s.begin(); p--) {
		cout << p->second << " " << p->first<< endl;
	}
	cout << p->second << " " << p->first << endl;*/
	for (auto &p : m) {
		for(auto k: p.second){
			cout << k <<" "<< p.first << endl;
		}
	}

}