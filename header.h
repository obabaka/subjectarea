#pragma once
#include<string>

class person//сотрудник
{
public:
	std::string name;//имя
	int number;//номер корпуса
	std::string specialization;//область работы
	bool complited_work;//завершенная работа

	person()
	{
		this->access_level = 0;
		this->complited_work = 0;
		this->name = "";
		this->specialization = "";
	}

	/*person(person&& first)
	{
		this->access_level = first.access_level; first.access_level = 0;
		this->complited_work = first.complited_work; first.complited_work = 0;
		this->name = first.name; first.name = nullptr;
		this->number = first.number; first.number = 0;
		this->specialization = first.specialization; first.specialization = nullptr;
	}*/

	void promotion(std::string new_spetialization)//повышение
	{
		this->specialization = new_spetialization;
	}

	bool operator<(int level)
	{
		return (access_level < level ? true : false);
	}

	bool operator==(int number)
	{
		return number == number ? true : false;
	}

	friend void change_level(person& person);//изменение уровня доступа


	person& operator=(person&& first)
	{
		access_level = first.access_level; 			first.access_level = 0;
		name = first.name;							first.name = "";
		number = first.number;						first.number = 0;
		specialization = first.specialization;		first.specialization = "";
		return *this;
	}

private:
	int access_level;//уровень доступа
};

void change_level(person& person)
{
	person.access_level++;
}

class biologist :public person
{
public:
	bool report;

	void ready_report()//отчет готов
	{
		if (this->complited_work)
			this->report = true;
		else this->report = false;
	}
	virtual void Print_report()
	{
		if (this->complited_work)
			std::cout << "report from biologist";
	}
};
class laborant :public biologist
{
public:
	std::string work;//что делает

	void Print_report()
	{
		if (this->complited_work)
			std::cout << "report from laborant";
	}
};
