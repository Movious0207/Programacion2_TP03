#include <iostream>
#include <fstream>
#include <string>

using namespace std;

const int maxChar = 1000;

void main()
{
	ofstream outputStream;
	ifstream inputstream;

	string phrase[2];
	
	char array1[maxChar];
	char array2[maxChar];

	cout << "\nIntroduce una frase:\n";
	cin.getline(array1,maxChar);

	phrase[0] = array1;

	cout << "\nIntroduce otra frase:\n";
	cin.getline(array2, maxChar);

	phrase[1] = array2;

	outputStream.open("long_text.txt");

	if (phrase[0].size() > phrase[1].size())
	{
		outputStream << phrase[0] << endl;
	}
	else
	{
		outputStream << phrase[1] << endl;
	}

	outputStream.close();

	outputStream.open("short_text.txt");

	if (phrase[0].size() < phrase[1].size())
	{
		outputStream << phrase[0] << endl;
	}
	else
	{
		outputStream << phrase[1] << endl;
	}

	outputStream.close();
}