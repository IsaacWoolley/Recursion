#include <iostream>

int factorial(int n) {
	if (n == 1) {
		return 1;
	}
	else {
		return n * (factorial(n - 1));

	}
}

int power(int base, int exponent) {
	if (exponent == 0) {
		return 1;
	}
	else {
		return base * (power(base, exponent-1));
	}
}

int sum_digits(unsigned n) {
	if (n < 10) {
		return n;
	}
	else {
		return n % 10 + (sum_digits(n/10));
	}
}

int b_counter(char data[], int length, int i) {
	if (i >= length) {
		return 0;
	}
	if (data[i] == 'b') {
		i++;
		return 1 + (b_counter(data, length, i));
	}
	else {
		i++;
		return (b_counter(data, length, i));

	}
}

int string_length(char* data) {
	if (*data == '\0') {
		return 0;
	}
	else {
		return 1 + string_length(data + 1);
	}
}

int main() {
	//std::cout<< factorial(4);
	//std::cout << power(5, 3);
	//std::cout << sum_digits(1234);
	//char myString2[] = { "bHellbo" };
	//std::cout << b_counter(myString2, 7, 0);
	char myString[] = { "Hello\0" };
	std::cout << string_length(myString);
}