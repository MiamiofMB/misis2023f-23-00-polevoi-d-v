#include <iostream> 
#include <vector> 
#include <unordered_map>
int main() {
	int n,x;
	std::vector<int> res;
	std::cin >> n;
	for (int i = 0;i < n;i++) {
		std::cin >> x;
		res.push_back(x);
	}
	for (int i = 0;i < res.size();i++) {
		int save = 0;
		for (int j = res.size() - 1;j > i;j--) {
			//std::cout << res[j]<<" "<<res[i]<< "\n";
			if (res[j] == res[i]) {
				save = 1;
			}
			if (save == 1) {
				res[i] = 0;

			}
		}
		save = 0;
	}
	std::cout << res.size() - std::count(res.begin(),res.end(),0)<<"\n";
	for (int i : res) {
		if (i != 0) {
			std::cout << i << ' ';
		}
		
	}
}

