//Этот проект создан с помощью классического шаблона
#include <iostream>
#include <cstdlib>
#include <ctime>


int nod_AB(int A, int B) {
	int nod = 1;
	for ( int i = 1; i <= A; i++) {
		if (A % i == 0 && B % i == 0) {
			nod = i;
		}
}
	return nod;
}

int mirror_number(int A) {
	int number = 0;
	while (A) {
		number = 10 * number + A % 10;
		A /= 10;
	}
	return number;
}

int arr_sort(int arr[], int length, int A){
	int N = 0;
	for (int i = 0; i < length; i++)
		if (arr[i] == A)
			N = i;
			
	srand(time(NULL));
	for (int i = 0; i < length; i++)
		arr[i] = rand() % (length - N) + N;

	return N;
}

void arr_fill(int arr[], int length, int A, int B) {
	srand(time(NULL));
	for (int i = 0; i < length; i++)
		arr[i] = rand() % (B - A) + A;
}




int main() {
	setlocale(LC_ALL, "Russian");
	int m, n, k, a, b, c;
	std::cout << "Задание 1:\nВведите 2 числа: \n";
	std::cin >> n >> m;
	std::cout << "НОД равен " << nod_AB(n, m) << ".\n\n";




	std::cout << "Задание 2.\nВведите число: \n";
	std::cin >> k;
	std::cout << "Число " << k << " в отраженном виде равно " << mirror_number(k) << ".\n\n";



	std::cout << "Задание 3.\nВведите число N: \n";
	std::cin >> a;
	const int size = 5;
	int arr[size]{ 2, 4, 6, 8, 10 };
	std::cout << "Первая позиция числа " << a << " равна " << arr_sort(arr, size, a) << ".\n\n";


	std::cout << "Задание 4.\nВведите числа A и B: \n";
	std::cin >> b >> c;
	const int size1 = 5;
	int arr1[size1]{};
	


















	return 0;
}