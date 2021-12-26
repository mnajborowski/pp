#pragma once
#include <iostream>
#include <vector>

using namespace std;

template <typename T>
class Vector {
private:
	unsigned int dimensions;
	T* data;
public:
	Vector<T>(unsigned int dimensions) :
		dimensions(dimensions), data(new T[dimensions]()) {}

	Vector<T>(const Vector<T>& v) :
		dimensions(v.dimensions), data(new T[v.dimensions]()) {}

	virtual ~Vector<T>() {
		if (data) delete[] data;
	}

	Vector<T>& operator=(const Vector<T>& v) {
		if (data) delete[] data;
		if (this != &v) {
			dimensions = v.dimensions;
			data = new T[v.dimensions]();
		}
		return *this;
	}

	unsigned int size() const {
		return dimensions;
	}

	T& at(unsigned int index) {
		return data[index];
	}

	const T& at(unsigned int index) const {
		return data[index];
	}

	T& operator[](unsigned int index) const {
		return data[index];
	}
};



template<typename T>
Vector<T> add(const Vector<T>& a, const Vector<T>& b) {
	Vector<T> c(a.size());
	for (int i = 0; i < a.size(); i++) {
		c[i] = a[i] + b[i];
	}
	return c;
}

template<typename T>
bool equals(const Vector<T>& a, const Vector<T>& b) {
	if (&a == &b) return true;
	if (a.size() != b.size())
		return false;
	for (unsigned int i = 0; i < a.size(); i++) {
		if (a[i] != b[i]) return false;
	}
	return true;
}

template<typename T>
Vector<T> operator+(const Vector<T>& a, const Vector<T>& b) {
	Vector<T> c(a.size());
	for (int i = 0; i < a.size(); i++) {
		c[i] = a[i] + b[i];
	}
	return c;
}

template<typename T>
Vector<T> operator-(const Vector<T>& a, const Vector<T>& b) {
	Vector<T> c(a.size());
	for (int i = 0; i < a.size(); i++) {
		c[i] = a[i] - b[i];
	}
	return c;
}

template<typename T>
bool operator==(const Vector<T>& a, const Vector<T>& b) {
	if (&a == &b) return true;
	if (a.size() != b.size())
		return false;
	for (unsigned int i = 0; i < a.size(); i++) {
		if (a[i] != b[i]) return false;
	}
	return true;
}

template<typename T>
bool operator!=(const Vector<T>& a, const Vector<T>& b) {
	if (&a == &b) return false;
	if (a.size() != b.size())
		return true;
	for (unsigned int i = 0; i < a.size(); i++) {
		if (a[i] != b[i]) return true;
	}
	return false;
}

template<typename T>
std::ostream &operator<<(std::ostream &out, const Vector<T> &v) {
	for (int i = 0; i<v.size(); i++) {
		out << v[i] << std::endl;
	}
	return out;
}