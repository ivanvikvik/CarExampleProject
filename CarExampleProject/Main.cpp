#include "Car.h"

int main(void) {
	string brand, model;
	int age;
	double price;

	Car car1;

	// ������� ����� �����������������
	cout << "Input brand of your car: ";
	cin >> brand;
	car1.setBrand(brand);

	// ������� ������ ������ ����������
	cout << "Input model of your car: ";
	cin >> model;
	car1.setModel(model);

	// ������� ������� ������ ����������
	cout << "Input age of your car: ";
	cin >> age;
	car1.setAge(age);

	// ������� ��������� ������ ����������
	cout << "Input price of your car: ";
	cin >> price;
	car1.setPrice(price);
	
	// ���������� � ����� ����������
	cout << "\nInfo about your car:" << endl;
	cout << car1.getInfo() << endl;

	return 0;
}
