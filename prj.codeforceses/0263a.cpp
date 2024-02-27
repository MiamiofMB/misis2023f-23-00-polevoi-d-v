

#include <iostream> 
#include <vector> 
#include <algorithm> 
#include <unordered_map> 

int main() {
	std::pair<int, int> save;
	for (int i = 1;i < 6;i++) {
		for (int j = 1;j < 6;j++) {
			int x;
			std::cin >>x;
			if (x == 1) {
				save.first = i;
				save.second = j;
				break;
			}
			
		}
	}
	
	int f = std::abs(3 - save.first) + std::abs(3 - save.second);
	std::cout << f;



}
