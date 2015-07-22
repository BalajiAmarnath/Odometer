#include <iostream>
#include <string>

#define MIN 1
#define MAX 9

class Odometer {
	
	public:
		int length;
		Odometer(int);
		bool isValidNumber(int)
		int nextNumber(int);
		int previousNumber(int);
		int difference(int, int);
}

Odometer::Odometer(int lenght) {
	this->length = length;
}

int Odometer::nextNumber(int number) {
	int i = number >= max ? min : number + 1 ;
	while (!isValidNumber(i))
		i++;
	}
	return i;
}

int Odometer::difference(int number1,int number2){
	if (number1 > number2) {
		swap(&number1, &number1);
	}
	
	int validCount = 0;
	for (int i = number1 + 1 ; i < number2 ; i++ ) {
		if (isValidNumber(i)) {
			validCount++;
		}
	}
	return validCount + 1;
}

void Odometer::swap(int *x,int *y){
	int temp;
	temp = &x;
	&x = &y;
	&y = temp;
}

