#include <iostream> // input output stream

#include <fstream>

#pragma warning(disable : 4996)

// # метакоманды


int main()
{

	// "r" - Чтение (Только смотреть, но не изм) 
	// "w" - Запись (Редактировать) 
	// "e" - Выполнять

//Условная компиляция
#ifdef RED  // Если у меня в свойствах есть указаное ключ слово
	//То код будет выполнятся, иначе нет
	freopen("input.txt", "r", stdin); // Перенаправили консольный input на файл 
	freopen("output.txt", "w", stdout); // Вам больше не нужна консоль
#endif

	int a, b;
	std::cin >> a >> b;

	if ((a < 5) ^ (b < 5))
	{
		std::cout << "УРА";


	}
	else
	{

		std::cout << "НЕ УРА";
	}









	




}