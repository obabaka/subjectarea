#pragma once
#include <iostream>
#include <string>
#include <ctime>
#include <stdlib.h>

bool flag;
class avto
{
	friend std::string race(avto, avto);
public:
	std::string company;
	std::string name;
	int year;
	int speed;
};

std::string race(avto object, avto object1)
{
	srand(time(NULL));
	if (object.speed > object1.speed)
	{
		if (object.speed - object1.speed >= 50)
		{
			std::cout << "У автомобилей слишком большая разница в скорости! "<< object.name<< " победил!";
			
			flag = false;
		}
		else
		{
			flag = true;
			std::cout << "Всё еще может решиться в гонке! ";
		}
	}
	else
	{
		if (object1.speed - object.speed >= 50)
		{
			std::cout << "У автомобилей слишком большая разница в скорости! " << object1.name << " победил!";
			flag = false;
		}
		else
		{
			flag = true;
			std::cout << "Всё еще может решиться в гонке! ";
			
		}
	}
	std::cout << "\n----------------------------------\n";
	int num = rand() % 2;
	if ((flag == true) && (num == 1))
	{
		std::cout << object.name << " Победил!";
	}
	else if ((flag == true) && (num == 0))
	{
		std::cout << object1.name << " Победил!";
	}
	return "\nГонка закончена!";
}
