#include <iostream>
int main() {
	setlocale(LC_ALL, "ru_RU.UTF-8");
	double start, end, step;
	std::cout << "������� ��������� �������� x: ";
	std::cin >> start; // ������ �������� �������� ����������
	std::cout << "������� �������� �������� x: ";
	std::cin >> end; // ������ ������� �������� ����������
	std::cout << "������� ���gg: ";
	std::cin >> step; // ������ ���, � ������� � ������� ����� ���������� ��������
		for (double x = start; x <= end; x += step) {
			double y = sin(x); // ������� y = sin(x)
			std::cout << x << " | " << y << std::endl; // ������� �������� ������� ��� ������� ���������(x | y)
		} 
	return 0;
}