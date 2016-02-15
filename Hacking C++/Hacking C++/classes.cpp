#include <iostream>
using namespace std;

struct Cat
{

public:
	Cat(int initialAge);
	~Cat();
	int getAge();
	void setAge(int age);
	void Meow();

private:
	int catAge;

};
//Cat constructor, 
Cat::Cat(int initialAge)
{
	catAge = initialAge;
}
//Cat destructor 
 Cat::~Cat()
 {

 }
//getAge, Pulic accessor function
	//returns value of its age member
int Cat::getAge()
{
	return catAge;
}


void Cat::setAge(int age){

	catAge = age; //sets its age to age
}


void Cat::Meow(){

	cout << "Meow\n";
}

int main()
{
	Cat myCat(9);
	
	myCat.Meow();

	cout << "My Cat's name is Frizzy and it age is ";
	cout << myCat.getAge() << ". \n";

	myCat.Meow();
	myCat.Meow();
	myCat.setAge(7);
	cout << "My Cat's name is Frizzy and it age is ";
	cout << myCat.getAge() << ". \n";


	return 0;
}