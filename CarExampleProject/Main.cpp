#include "Car.h"

int main(void) {
	string brand, model;
	int age;
	double price;

	// введите марку автопроизводителя
	cout << "Input brand of your car: ";
	cin >> brand;

	// введите модель вашего автомобиля
	cout << "Input model of your car: ";
	cin >> model;

	// введите возраст вашего автомобиля
	cout << "Input age of your car: ";
	cin >> age;

	// введите стоимость вашего автомобиля
	cout << "Input price of your car: ";
	cin >> price;

	Car car1(brand, model, age, price);

	// информация о вашем автомобиле
	cout << "\nInfo about your car:" << endl;
	cout << car1.getInfo() << endl;

	return 0;
}
