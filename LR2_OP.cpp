#include <iostream>
#include <windows.h>
using namespace std;

int sizeSumm(int* tempArrSize, int tempNumb);
void timeAddArr(long int** timeArr, int timeSize);
void deleteBigArr(long int** tampleArr, int tempSize);

int main()
{
	

	int number=0; //������� ����� .csv
	cin << number;
	int* arrSize = new int[number];
	
	size = sizeSumm(arrSize, number);
	cin << size;
	string* countryArr = new int[size];		//�������� ������ �����
	
	long int* voteArr;
	voteArr = new long int* [size];		// �������� ������ �������
	timeAddArr(voteArr, size);

	int* pointArr = new int[size];		//�������� ������ ��� �����

	int marksArr[10];					// ����� 10 ��� �����

	deleteBigArr(voteArr, size);
	delete[] arrSize;
	delete[] coutryArr;
}

int sizeSumm(int* tempArrSize, int tempNumb) {
	int a = 0;
	int sum = 0;
	for (int i = 0; i < tempNumb; tempNumb++) {
		a = tempArrSize[i];
		sum = sum + a;
	}
	return sum;
}

void timeAddArr(long int** timeArr, int timeSize) {		//�������� ���������� �������
	for (int i = 0; i < timeSize; i++) {
		timeArr[i] = new int[timeSize];
	}
}

void deleteBigArr(long int** tampleArr, int tempSize) {   //������
	for (int i = 0; i < tempSize; i++) {
		delete[] tampleArr[i];
	}
	delete[] tampleArr;
}



