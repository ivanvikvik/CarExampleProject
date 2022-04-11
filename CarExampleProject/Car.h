#pragma once
#include "Header.h"

class Car {
private:
	string brand;
	string model;
	int age;
	double price;
public:
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

	string getBrand() {
		return brand;
	}

	void setBrand(string brand) {
		this->brand = brand;
	}

	string getModel() {
		return model;
	}

	void setModel(string model) {
		this->model = model;
	}

	int getAge(){
		return age;
	}

	void setAge(int age) {
		this->age = age;
	}

	double getPrice() {
		return price;
	}

	void setPrice(double price) {
		this->price = price;
	}


	string getInfo() {
		return "Car: brand = " + brand
			+ "; model = " + model
			+ "; age = " + to_string(age)
			+ "; price = " + to_string(price);
	}
};
