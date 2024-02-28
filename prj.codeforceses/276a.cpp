


#include <iostream> 
#include <vector> 
#include <algorithm> 
#include <unordered_map> 
#include <set>

int main() {
	int n, k,f,t;
	std::cin >> n >> k;
	std::vector<int> res;
	for (int i = 0;i < n;i++) {
		std::cin >> f >> t;
		if (t > k) {
			res.push_back(f - (t - k));

		}
		else {
			res.push_back(f);
		}
	}
	auto r = *std::max_element(res.begin(),res.end());
	std::cout << r;
}
