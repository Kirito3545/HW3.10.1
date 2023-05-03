#include <iostream>
#include <string>

int main()
{
	setlocale(LC_ALL, "Russian");
	std::cout << std::endl;

	std::string name;

	std::cout << "Введите имя: ";
	std::cin >> name;

	std::cout << "Здравствуйте, " << name << "!";
	std::cout << std::endl;
}