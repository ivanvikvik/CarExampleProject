#include "Car.h"

int main(void) {
	string brand, model;
	int age;
	double price;

	Car car1;

	// введите марку автопроизводителя
	cout << "Input brand of your car: ";
	cin >> brand;
	car1.setBrand(brand);

	// введите модель вашего автомобиля
	cout << "Input model of your car: ";
	cin >> model;
	car1.setModel(model);

	// введите возраст вашего автомобиля
	cout << "Input age of your car: ";
	cin >> age;
	car1.setAge(age);

	// введите стоимость вашего автомобиля
	cout << "Input price of your car: ";
	cin >> price;
	car1.setPrice(price);
	
	// информация о вашем автомобиле
	cout << "\nInfo about your car:" << endl;
	cout << car1.getInfo() << endl;

	return 0;
}
