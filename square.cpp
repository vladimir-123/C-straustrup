#include <iostream>
// программа считает квадраты чисел от 1го до 100 без использования умножения
int square(int x){
	int temp = 0;
	for (int i = 0; i < x; ++i)
	{
		temp += x;
	}
	return temp;
}

int main(int argc, char const *argv[])
{
	for (int i = 0; i < 100; ++i)
	{
		std::cout << i << '\t' << square(i) << std::endl;
	}
	return 0;
}