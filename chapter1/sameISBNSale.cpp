#include <iostream>
#include "Sales_item.h"

//习题1.22
int main(int argc, char const *argv[])
{
	Sales_item sum, item;
	bool first = true;
	while (std::cin >> item) {
		if (first) {
			sum = item;
			first = false;
		} else {
			sum += item;
		}
	}
	std::cout << sum << std::endl;
	system("pause");
	return 0;
}