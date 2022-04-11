#include "Car.h"

// default constructor - конструктор по умолчанию
Car::Car() {
	brand = "no brand";
	model = "no model";
	age = 0;
	price = 0;
}

// constructor with params #1 - конструктор c параметрами
Car::Car(string brand, string model) {
	this->brand = brand;
	this->model = model;
	age = 0;
	price = 0;
}

// constructor with params #2 - конструктор c параметрами
Car::Car(string brand, string model, int age, double price) {
	this->brand = brand;
	this->model = model;
	this->age = age;
	this->price = price;
}

// destructor - деструктор
Car::~Car() {

}

string Car::getBrand() {
	return brand;
}

void Car::setBrand(string brand) {
	this->brand = brand;
}

string Car::getModel() {
	return model;
}

void Car::setModel(string model) {
	this->model = model;
}

int Car::getAge() {
	return age;
}

void Car::setAge(int age) {
	this->age = age;
}

double Car::getPrice() {
	return price;
}

void Car::setPrice(double price) {
	this->price = price;
}

string Car::getInfo() {
	return "Car: brand = " + brand
		+ "; model = " + model
		+ "; age = " + to_string(age)
		+ "; price = " + to_string(price);
}