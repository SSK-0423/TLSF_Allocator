#include <iostream>
#include "Allocator.hpp"

int main()
{
	char memoryBlock[1024];
	MemoryBlock* block = new(memoryBlock)block();
	return 0;
}