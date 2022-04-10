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
	Car(string initBrand, string initModel) {
		brand = initBrand;
		model = initModel;
		age = 0;
		price = 0;
	}

	// constructor with params #2 - конструктор c параметрами
	Car(string initBrand, string initModel, int initAge, double initPrice) {
		brand = initBrand;
		model = initModel;
		age = initAge;
		price = initPrice;
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
