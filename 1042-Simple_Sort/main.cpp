#include <iostream>

int main(void)
{
	int nums[3], bk[3];
	std::cin >> nums[0] >> nums[1] >> nums[2];
	
	for (int i = 0; i < 3; i++)
	{
		bk[i] = nums[i];
	}

	for (int i = 0; i < 3; i++)
	{
		if (nums[i] > nums[i+1])
		{
			int temp = nums[i];
			nums[i] = nums[i+1];
			nums[i+1] = temp;
			i = -1;
		}
	}

	std::cout << nums[0] << std::endl << nums[1] << std::endl << nums[2] << std::endl << std::endl;
	std::cout << bk[0] << std::endl << bk[1] << std::endl << bk[2] << std::endl;
	return 0;
}

