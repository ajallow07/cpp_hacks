#include <iostream>

using namespace std;

typedef unsigned short int USHORT;

int main ()
{
	/*
	unsigned short shortVar = 5;
	unsigned long longVar = 65535;
	long zee = -65535;

	cout << " Address of short is: \t"<< &shortVar;
	cout << "\n Address of long is: \t "<< &longVar;
	cout << " \n Address of  char is: \t "<< &zee;
	

	USHORT myAge;
	USHORT * pAge = 0;
	myAge = 5;

	cout << "myAge:  "<< myAge << "\n";
	pAge = &myAge; //assign the address of my age to pAge

	cout << "*pAge: " << *pAge << endl;
	cout << "*pAge = 7" << endl;

	*pAge = 7;

	cout << "*pAge: " << *pAge << endl;
	cout << "myAge: " << myAge << endl;

	cout << "pAge: " << pAge << endl;
	cout << "myAge: " << &myAge << endl;
*/

	int localVariable = 5;
	int * pLocal = &localVariable;
	int * pHeap = new int;

	if (pHeap == NULL)
	{
		cout << "Error: No memory for pHeap!! ";
		return 0;
	}
	*pHeap = 7;
	cout << "localVariable: " << localVariable << endl;
	cout << "*pLocal: " << *pLocal << endl;
	cout << "*pHeap: " << *pHeap << endl;

	delete pHeap;
	 pHeap = new int;

	 if (pHeap == NULL)
	 {
	 	cout << "Error: NO memory for pHeap" << endl;
	 	return 0;

	 }
	 *pHeap = 9;
	 cout << "*pHeap: " << *pHeap << endl;
	 delete pHeap;
	return 0;

}