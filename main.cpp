﻿

// ctrl + alt + L

int main()
{
	//
	//Тип   Имя   
	int Chislo1 = 123543453;  // 4 байт

	Chislo1 = 4366; // Оператор присваивания = // Pascal :=  // Java = // Python = // JS = // R <-
	// Сравнение на равенство    ==

	Chislo1 = 0x110e; // Шестна запись

	//int a = -2^31 ... 2^31-1

	long long ll; // 8 байт

	short sh; // 2 байт


	float f = 1.5; // 4 байт   3 знака

	float ff = 545e-2;

	float fff = 545e2;

	double llf = 1.4363466; // 8 байт      6 знаков - 9 знаков
	long double lllf; // 10 байт


	char Simvol1; // 1 символ 1 байт  // -128    127   как int был знаковый

	bool bl; // 1 бит   

	bool bl2;

	//__int16 i; // short
	//__int32 t; GNU G++ такого типа нет

	unsigned int ui = -1;

	const int A = 324324; // Не редактируемая

	//Арифметические операции  +   -   *    /       %     ++  --

	60 % 7;// = 60 - (60 / 7) * 7




	int aa = 60;

	aa++; // Увеличить себя на 1 

	//Префикс приставка
	//Поствикс  суффикс

	aa--; //Уменьшить себя на 1


	++aa;

	--aa;

	


	int bb = 7;

	bb = ++aa; // Префиксный выполняется до присваивания

	bb = aa++;// А постфиксный после

	int cc;

	cc = (aa + bb) * aa;


	//Битовые операции  ( самые быстрые)
	//  &   И (7 клавиша)
	//  |  ИЛИ (над enter)
	// ^  >>  <<

	aa = 13;

	bb = 20;

	cc = aa & bb;

	cc = aa | bb;

	// ^   XOR

	cc = aa ^ bb;

	// <<    >>    

	char a = 75;

	int c = a >> 3;










	//A = 435435;




	//char* chm; массив из СИ

	//std::string  c++


}