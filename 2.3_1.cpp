#include<iostream> // подключение библиотеки ввода-вывода
float a, b, c; // Объявляем переменные 
 int main()  // объявление главной целочисленной функции 
{ // тело функции (начало)
	using namespace std; // подключение пространства имен
	setlocale(LC_ALL, "RU"); // Подключение кириллицы
	cout << "Введите множители(первый множитель_ второй множитель):" << endl; // Вывод сообщения пользователю
	cin >> a >> b;// ввод множителей
	c = a * b; // перемножение множителей
	cout << "Произведение множителей равно:" << " " <<c<< endl; // вывод произведения
	return 0; // возврат 0, если программа сработала без ошибок
} // тело функции (конец)
