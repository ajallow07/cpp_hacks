#include <iostream>

using namespace std;

 int multiply(int a , int b)
 {
 	cout <<"In Add(), received " << a << " and "
 << b << "\n";

 return (a * b);

 }
 void showTheUseOfEnumeratedConstant()
 {
 	enum Months { January, February, March, April, May, June, July, August, September, October, November, December } ;

 	Months Christmas, BirthMonth, GrauationMonth, favoriteMonth;
 	int xmas, bday, f, g;
 	cout << "\nWhich  month is Christmas celebrated (0-11)? ";
 	cin >> xmas;
 	Christmas = Months(xmas);
 	cout << "We will celebrate Christmas in " << Christmas << "\n";

 	cout << "\nIn which month will you graduate? ";
 	cin >> g;
 	GrauationMonth = Months(g);
 	cout << "You're graduating in "<< GrauationMonth << ", congratulations!\n";

 	cout << "\nIn which month is  your birthday (0-11)? ";
 	cin >> bday;
 	BirthMonth = Months(bday);
 	cout << "When "<< BirthMonth << " comes, I will send you my birthday wishes and a cake \n";

 	cout << "\nWhat is your favorite month (0-11)?"; 
 	cin >> f;
 	favoriteMonth = Months(f);

 	cout << "You said your favorite month is: \n" << favoriteMonth;

 }

 void printSizeOfVariableTypes()
 {
 	cout << "Output: \n";
 	cout << "The size of an  int is: \t" << sizeof(int) << " bytes\n";
 	cout << "The size of an  short is: \t" << sizeof(short) << " bytes\n";
 	cout << "The size of an  long is: \t" << sizeof(long) << " bytes\n";
 	cout << "The size of an  char is: \t" << sizeof(char) << " bytes\n";
 	cout << "The size of an  float is: \t" << sizeof(float) << " bytes\n";
 	cout << "The size of an  double is: \t" << sizeof(double) << " bytes\n";
 }

void useTernaryOperator(int x, int y)
 {
 	int z;
 	z = (x > y) ? x : y;
 	cout << "z =" << z;
 }

int main (void)
{
	/*cout << "I'm in main()! \n";
	int x , y , z ;
	cout << "Enter two numbers: ";
	cin >> x;
	cin >> y;

	cout << "\nCalling multiply() \n ";
	z = multiply(x, y);

	cout << "Back in main() \n";

	cout << " z was set to \n" << z;
	cout << "Exiting... \n\n";
	*/

	//cout <<"In main(), printing sizes of variable types \n";
	//printSizeOfVariableTypes();
	int a, b;
	cout << "Please, enter two numbers: ";
	cin >> a;
	cin >> b;

	useTernaryOperator(a,b);

/*
	enum Days {Monday, Tuesday, Wednesday, Thursday};

	
	cout << Days(0) << "\n";
	if (Days(0) == Monday)
		cout << "It is a Monday, Hoorah!";

	showTheUseOfEnumeratedConstant();
*/
	return 0;
}