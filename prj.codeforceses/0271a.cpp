

#include <iostream> 
#include <vector> 
#include <algorithm> 
#include <unordered_map> 
#include <set>

int main() {
	int nu;
	std::set<int> ch;
	std::cin >> nu;
	for (int i = nu + 1;i < 9999;i++) {
		const int d1 = i / 1000;
		const int d2 = (i - 1000 * d1) / 100;
		const int d3 = (i - 1000 * d1 - 100 * d2) / 10;
		const int d4 = i - 1000 * d1 - 100 * d2 - 10 * d3;
		ch.insert(d1);
		ch.insert(d2);
		ch.insert(d3);
		ch.insert(d4);
		if (ch.size()==4) {
			std::cout << d1 << d2 << d3 << d4;
			break;
		}
		ch.clear();
	}

}

