#include "HeapInt.hpp"
#include <iostream>

HeapInt::HeapInt() {
    this->num = new int(0);
}
HeapInt::HeapInt(int x) {
    this->num = new int(x);
}
HeapInt::HeapInt(const HeapInt& x) {
    this->num = new int(*x.num);
}
HeapInt::~HeapInt() {
    delete this->num;
}

HeapInt& HeapInt::operator=(int x) {
    this->num = new int(x);
    return *this;
}

HeapInt& HeapInt::operator=(const HeapInt& obj) {
    this->num = new int(*(obj.num));
    return *this;
}

HeapInt HeapInt::operator+(const HeapInt& obj) {
    return HeapInt(*(this->num) + *(obj.num));

}
HeapInt HeapInt::operator-(const HeapInt& obj) {
    return HeapInt(*(this->num) - *(obj.num));

}
bool HeapInt::operator==(const HeapInt& obj) {
    return (*(this->num) == *(obj.num));

}

istream& operator >> (istream& input, HeapInt& obj) {
    input >> *(obj.num);
    return input;
}

ostream& operator << (ostream& output, HeapInt& obj) {
    output << *(obj.num);
    return output;
}