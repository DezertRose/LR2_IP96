#include <iostream>
#include <cstring>
//#include <windows.h>
using namespace std;

#include "Reedfrom.hpp"

int sizeSumm(int* tempArrSize, int tempNumb);
void timeAddArr( long int** timeArr, int timeSize);
void deleteBigArr( long int** tampleArr, int tempSize);
void timeAddChar(char** timeArr, int number);

int main()
{
	

	int number=0; //������� ����� .csv
	cin >> number;
    char** name = new char* [number];
    timeAddChar(name, number);
	int* arrSize = new int[number];
    int size;
    way( arrSize, name, number);
	size = sizeSumm(arrSize, number);
	char** countryArr = new char* [size];		//�������� ������ �����
    timeAddChar(countryArr, size);
    
	long int** voteArr = new long int* [size];		// �������� ������ �������
	timeAddArr(voteArr, size);
    
    readallfile(name, arrSize, number, countryArr,voteArr );

	int* pointArr = new int[size];		//�������� ������ ��� �����

	int marksArr[10];					// ����� 10 ��� �����

	deleteBigArr(voteArr, size);
	delete[] arrSize;
	delete[] countryArr;
}

int sizeSumm(int* tempArrSize, int tempNumb) {
	int a = 0;
	int sum = 0;
	for (int i = 0; i < tempNumb; i++) {
		a = tempArrSize[i];
		sum = sum + a;
	}
	return sum;
}

void timeAddArr( long int** timeArr, int timeSize) {		//�������� ���������� �������
	for (int i = 0; i < timeSize; i++) {
		timeArr[i] = new long int[timeSize];
	}
}

void timeAddChar(char** timeArr, int number) {
    for (int i = 0; i < number; i++) {
        timeArr[i] = new char [50];
    }
}

void deleteBigArr( long int** tampleArr, int tempSize) {   //������
	for (int i = 0; i < tempSize; i++) {
		delete[] tampleArr[i];
	}
	delete[] tampleArr;
}



