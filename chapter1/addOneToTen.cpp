#include <iostream>

int main() {
	auto sum = 0, val = 1;
	while (val <= 10) {
		sum += val;
		++val;
	}
	std::cout << "1 到 10 的整数之和为" << sum << std::endl;
	system("pause");
	return 0;
}