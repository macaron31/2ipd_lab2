// ConsoleApplication2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");

	const int ARRSIZE = 10;

	int arr[ARRSIZE] = {
		5, 2, 2, 8, 3, 6, 0, 7, 9, 2
	};

	cout << "Размер массива: " << ARRSIZE << endl;

	int sum = 0;

	for (int i = 0; i < ARRSIZE; i++)
	{
		cout << "Число " << arr[i] << " является '" << i + 1 << "' элементом в массиве" << endl;

		if (arr[i] % 3 == 0)
		{
			sum += arr[i];
		}
	}

	cout << "Суммой всех чисел кратных 3 будет: " << sum;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
