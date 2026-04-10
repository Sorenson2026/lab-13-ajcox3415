/*This programm will radomly generate a list of 25 initgers, sort them and output them
AJ Cox
4/10/2026*/

#include <iostream>
#include <ctime>
#include <vector>
#include <iomanip>
using namespace std;

void fillVector(vector<int> & data);
void bubbleSort(vector<int> & data);

// Main will greet and call the other functions.
int main()
{
	srand(static_cast<unsigned int>(time(0)));

	vector<int> data(25);

	//Greeting
	cout << "Hello and welcome." << endl;

	//Call fill vector
	fillVector(data);
	bubbleSort(data);

	return 0;
}

// fillVector will fill the vactor "data" with random values.
void fillVector(vector<int> & data)
{
	for (int i = 0; i < 25; i++)
	{
		data[i] = rand() % 101;
	}
	
}

void bubbleSort(vector<int>& data)
{
	for (int i = 0; i < 25; i++)
	{
		cout << setw(3) << data[i];
	}
	cout << endl;

	for (int i = 0; i < 25; i++)
	{

	}
}