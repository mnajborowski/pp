#pragma once
#include <iostream>
#include <vector>

template <typename T>
class Vector {
private:
	size_t dimensions;
	T* data;

public:
	Vector<T>(size_t dimensions) :
		dimensions(dimensions), data(new T[dimensions]()) {
		if (dimensions == 0) {
			if (data) delete[] data;
			std::cout << "Error." << std::endl;
			throw std::domain_error("Wymiary wektora nie moga byc rowne zero!");
		}
	}
	virtual ~Vector<T>() {
		if (data) delete[] data;
	}

	Vector<T>(const Vector<T> &other) : dimensions(other.dimensions), data(new T[other.dimensions]()) {
		for (size_t i = 0; i < other.size(); i++) {
			data[i] = other[i];
		}
	}

	Vector<T>& operator=(const Vector<T> &other) {
		if (this != &other) {
			delete[] data;
			dimensions = other.dimensions;
			data = new T[other.dimensions];
			for (size_t i = 0; i < other.size(); i++) {
				data[i] = other[i];
			}
		}
		return *this;
	}

	T& operator[](size_t index) {
		if (index<0 || index >= this->dimensions) {
			throw std::out_of_range("Out of range");
		}
		return data[index];
	}

	T& operator[](size_t index) const {
		if (index<0 || index >= this->dimensions) {
			throw std::out_of_range("Out of range");
		}
		return data[index];
	}

	size_t size() const {
		return dimensions;
	}

	T& at(size_t index) {
		return data[index];
	}

	const T& at(size_t index) const {
		return data[index];
	}
};

template<typename T>
Vector<T> operator+(const Vector<T>& a, const Vector<T>& b) {
	if (a.size() != b.size()) {
		throw std::out_of_range("Out of range");
	}
	Vector<T> c(a.size());
	for (size_t i = 0; i < a.size(); i++) {
		c[i] = a[i] + b[i];
	}
	return c;
}

template<typename T>
Vector<T> operator-(const Vector<T>& a, const Vector<T>& b) {
	if (a.size() != b.size()) {
		throw std::out_of_range("Out of range");
	}
	Vector<T> c(a.size());
	for (size_t i = 0; i < a.size(); i++) {
		c[i] = a[i] - b[i];
	}
	return c;
}

template<typename T>
bool operator==(const Vector<T>& a, const Vector<T>& b) {
	if (&a == &b) return true;
	if (a.size() != b.size())
		return false;
	for (size_t i = 0; i < a.size(); i++) {
		if (a[i] != b[i]) return false;
	}
	return true;
}

template<typename T>
bool operator!=(const Vector<T>& a, const Vector<T>& b) {
	if (&a != &b) return true;
	if (a.size() == b.size())
		return false;
	for (size_t i = 0; i < a.size(); i++) {
		if (a[i] == b[i]) return false;
	}
	return false;
}

template<typename T>
std::ostream& operator<<(std::ostream& stream, const Vector<T>& a) {
	stream << "[ ";
	for (auto i = 0; i < a.size(); i++)
	{
		stream << a[i] << " ";
	}
	stream << "]";
	return stream;
}

template<typename T>
Vector<T> add(const Vector<T>& a, const Vector<T>& b) {
	Vector<T> c(a.size());
	for (size_t i = 0; i < a.size(); i++) {
		c[i] = a[i] + b[i];
	}
	return c;
}

template<typename T>
bool equals(const Vector<T>& a, const Vector<T>& b) {
	if (&a == &b) return true;
	if (a.size() != b.size())
		return false;
	for (size_t i = 0; i < a.size(); i++) {
		if (a[i] != b[i]) return false;
	}
	return true;
}