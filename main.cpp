#include <iostream>

double celsius_to_fahrenheit(double celsius) {
	return celsius * 1.8 + 32;
}

double fahrenheit_to_celsius(double fahrenheit) {
	return (fahrenheit - 32) / 1.8;
}


double km_to_miles(double km) {
	return km * 0.6214;
}

double miles_to_km(double miles) {
	return miles / 0.6214;
}

struct feet_inches {
	int feet;
	int inches;
};

feet_inches meters_to_feet(double meters) {
	double aux = meters * 3.28084;
	feet_inches result;
	result.feet = floor(aux);
	result.inches = round((aux - result.feet) * 12);
	return result;
}

int main() {
	double temp, distance;

	std::cout << "Enter a temperature in celsius: ";
	std::cin >> temp;
	std::cout << temp << "C in Fahrenheit is: " <<
		celsius_to_fahrenheit(temp) << "F" << std::endl;

	std::cout << "Enter a temperature in fahrenheit: ";
	std::cin >> temp;
	std::cout << temp << "F in Celsius is: " <<
		fahrenheit_to_celsius(temp) << "C" << std::endl;

	std::cout << "Enter a distance in kilometers: ";
	std::cin >> distance;
	std::cout << distance << "km in miles is: " <<
		km_to_miles(distance) << " miles" << std::endl;

	std::cout << "Enter a distance in miles: ";
	std::cin >> distance;
	std::cout << distance << " miles in kilometers is: " <<
		miles_to_km(distance) << "km" << std::endl;

	std::cout << "Enter a distance in meters: ";
	std::cin >> distance;
	feet_inches result;
	result = meters_to_feet(distance);
	std::cout << distance << " meters in feet/inches is: " <<
		result.feet << "'" << result.inches << "''" << std::endl;

	return 0;
}

/* SHORT ANSWER QUESTIONS
Q1 - What errors does the compiler point out if you forget to include the header files?

YOUR ANSWER GOES HERE

Q2 - What error does the compiler point out if you forget to define the variables temp
and distance at the beginning of main()?

YOUR ANSWER GOES HERE


Q3 - What errors does the compiler point out if you forget to add the semi-colon (;) 
at the end of "std::cin >> temp;"

YOUR ANSWER GOES HERE

Q4 - Does the compiler gives an error if temp and distance are defined as ints, 
instead of doubles? If not, how come functions defined to operate on doubles, can 
operate on ints? Check: https://www.cplusplus.com/doc/tutorial/typecasting/

YOUR ANSWER GOES HERE

*/