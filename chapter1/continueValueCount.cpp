#include <iostream>

int main()
{
	auto curr_val = 0, val = 0;
	if (std::cin >> curr_val)
	{
		auto cnt = 1;
		while (std::cin >> val)
		{
			if (val == curr_val)
			{
				cnt++;
			}
			else
			{
				std::cout << curr_val << "������" << cnt << "��\n";
				curr_val = val;
				cnt = 1;
			}
		}
		std::cout << curr_val << "������" << cnt << "��\n";
	}
	system("pause");
	return 0;
}