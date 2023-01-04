

// ctrl + alt + L

int main()
{
	//int a = 9;
	//int b = 6;


	//int c = a && b;

	//int d = a & b;

	////Логические - левый и правый аргумент преобр в bool
	////  && И  || ИЛИ     <    >   ==   <=   >=   !=   
	////    !     



	//// Битовая   |   &   <<   >>   ~

	//int aa = 5;
	//aa = ~aa;

	//aa = ~(0);

	//unsigned int bb = aa;


	//  a += b    a = a + b
	//-=     *=   /=    %=


	//a ^= b;


	int a = 1e9;


	long long b = a;


	int c = 2e9;


	b = a * c; // Переполнение

	b = (long long) (a) * c; // Не будет переполнение

	long long d = a;

	//Можно так
	//b = d * c; // Не будет переполнение

	b =  (a) * (unsigned int) (c); // Не будет переполнение

	float f = a / c;


	f = float(a) / c;

	b = (long long)(a) * (long long)(c); // Не будет переполнение


	//f = f >> 3; // Не работают битовые операции

	int ff = f;

	b *= 345435;


	a *= 345435;



}