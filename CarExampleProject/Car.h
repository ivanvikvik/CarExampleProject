#pragma once
#include "Header.h"

class Car {
public:
	string brand;
	string model;
	int age;
	double price;

	// default constructor - конструктор по умолчанию
	Car() {
		brand = "no brand";
		model = "no model";
		age = 0;
		price = 0;
	}

	// constructor with params #1 - конструктор c параметрами
	Car(string brand, string model) {
		this->brand = brand;
		this->model = model;
		age = 0;
		price = 0;
	}

	// constructor with params #2 - конструктор c параметрами
	Car(string brand, string model, int age, double price) {
		this->brand = brand;
		this->model = model;
		this->age = age;
		this->price = price;
	}

	// destructor - деструктор
	~Car() {

	}

	string getInfo() {
		return "Car: brand = " + brand
			+ "; model = " + model
			+ "; age = " + to_string(age)
			+ "; price = " + to_string(price);
	}
};
