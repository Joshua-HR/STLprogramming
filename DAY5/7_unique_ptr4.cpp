#include <memory>
#include <iostream>

int main()
{
	std::unique_ptr<int> up1(new int); // bad

	
	std::unique_ptr<int> up2 = std::make_unique<int>(); // good
}