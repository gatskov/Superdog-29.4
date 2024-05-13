#include <iostream>
#include <string>
#include <vector>
#include "dog.h"
#include "talent.h"
#include <conio.h>
#define STR(text) #text
#define PRINT_TASK(SRT) \
	std::cout << STR(29.4 Practical Work.Task 1. Superdog\n-- -- -- -- -- -- -- -- -- -- -- -- -\n)

int main()
{
	PRINT_TASK(STR);
	Dog dog;
	dog.show_talents();
	_getch();

	return 0;
}
