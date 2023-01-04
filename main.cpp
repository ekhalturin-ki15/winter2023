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

	//FILE* IN;
	//FILE* OUT;
	//freopen_s(&IN,"input.txt", "r", stdin); // Их нету в GNU g++
	//freopen_s(&OUT, "output.txt", "w", stdout);


	//std::ifstream my_file_in("input.txt"); // Ищем файл input.txt в корне проекта
	////std::ifstream my_file_in("C://file1/file2/input.txt"); // Ищем файл input.txt в корне проекта

	int a, b, A, c;

	int d = c + a++;
	++a;
	bool(a) && bool(b);
	bool(a) & bool(b); // Теперь одно и тоже


	//my_file_in >> a >> b; // Пробелы табуляции 
	std::cin >> a >> b;

	////и переносы строк нужны как разделители

	//std::ofstream my_output("output.txt");

	std::cout << a + b;

	//my_output << a + b;




}