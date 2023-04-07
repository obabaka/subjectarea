#include <iostream>
#include<string>
#include "header.h"


int main()
{
	person first;

	first.name = "Alan";
	first.number = 5;
	first.specialization = "biology";
	first.complited_work = false;


	change_level(first);
	first.promotion("head of labaratory");
	first.number < 10 ? std::cout << "error\n" : first.number == 10 ? std::cout << "director's access\n" : std::cout << "access allowed\n";


	person second;
	second = person();
}
