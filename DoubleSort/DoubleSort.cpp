// DoubleSort.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <vector>


class Data {
	int number;
	std::string name;

public:
	Data() {	number = 0; name = "";	}
	Data(int num, std::string nam) {	number = num; name = nam;}
	Data(const Data &data) { number = data.number, name = data.name; }

	int GetNum() { return number; }
	std::string GetStr() { return name; }

	//void DoubleSort(std::vector<Data> vec);
};

void /*Data::*/DoubleSort(std::vector<Data> &vec)
{
	for (int i = 0; i < vec.size() - 1; ++i)
	{
		for (int j = 0; j < vec.size() - i - 1; ++j)
		{
			if (vec[j].GetNum() > vec[j + 1].GetNum())
			{
				Data tmp = vec[j];
				vec[j] = vec[j + 1];
				vec[j + 1] = tmp;
			}
		}
	}

	for (int i = 0; i < vec.size() - 1; ++i)
	{
		for (int j = 0; j < vec.size() - i - 1; ++j)
		{
			if (vec[j].GetNum() == vec[j + 1].GetNum())
			{
				if (vec[j].GetStr() > vec[j + 1].GetStr())
				{
					Data tmp = vec[j];
					vec[j] = vec[j + 1];
					vec[j + 1] = tmp;
				}
			}
		}
	}

}


int main()
{
	Data Data1(1, "C");
	Data Data2(1, "A");
	Data Data3(2, "D");
	Data Data4(1, "E");
	Data Data5(2, "B");
	std::vector<Data> vec{ Data1, Data2, Data3, Data4, Data5 };
	DoubleSort(vec);

	for (int i = 0; i < vec.size(); ++i)
	{
		std::cout << "number = " << vec[i].GetNum() << " , name = " << vec[i].GetStr() << std::endl;
	}

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
