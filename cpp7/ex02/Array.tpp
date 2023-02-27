/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 2/26/23, 17:00                   |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

#include "Array.hpp"

template<typename T>
Array<T>::Array() {
	arr = new T();
	s = 0;
}

template<typename T>
Array<T>::Array(unsigned int n) {
	arr = new T[n];
	s = n;
	for (unsigned int i = 0; i < n; i++)
		arr[i] = arr[0];
}

template<typename T>
Array<T>::Array(const Array& t) {
	s = 0;
	*this = t;
}

template<typename T>
Array<T>&	Array<T>::operator=(const Array& t) {
	if (this != &t) {
		arr = new T[t.size()];
		s = t.size();
		for (unsigned int i = 0; i < t.size(); i++)
			arr[i] = t.arr[i];
	}
	return *this;
}

template<typename T>
Array<T>::~Array() {
	delete [] arr;
}

template<typename T>
unsigned int	Array<T>::size() const {
	return s;
}

template<typename T>
 T&	Array<T>::operator[](const unsigned int idx) {
	try {
		if (idx < 0 || idx >= s)
			throw (std::exception());
		return arr[idx];
	}
	catch (std::exception& e) {
		std::cout << "index out of range" << std::endl;
		exit(1);
	}
	return arr[idx];
}

template<typename T>
const T&	Array<T>::operator[](const unsigned int idx) const {
	try {
		if (idx < 0 || idx >= s)
			throw (std::exception());
		return arr[idx];
	}
	catch (std::exception& e) {
		std::cout << "index out of range" << std::endl;
		exit(1);
	}
	return arr[idx];
}
