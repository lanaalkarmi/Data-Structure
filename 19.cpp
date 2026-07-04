#include <iostream>
#include <unordered_set>
using namespace std;

// unordered set






int main()
{
	unordered_set<int>s;
	s.insert(3);
	if (!s.empty()) {
		cout << " not empty";
	}
	//1
	if (s.count(3) > 0) {
		cout << " found";
	}
	//2
	auto it = s.find(3);// find هي عبارة عن iterator

	if (it != s.end()) {
		cout << " found";

	}
	for (auto x : s) {
		cout << x;
		// لانو الماب هي عبارة عن قيمة وحدة بينما السيت عبارة عن pair 
	}
}

