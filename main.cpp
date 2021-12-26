#include <iostream>
#include <random>
#include <vector>
#include <chrono>
#include <algorithm>

using namespace std;

void selectionSort(vector<int>& v) {
	for (int i = 0; i < v.size(); i++) { //������ ������ŭ �ݺ�
		int max = v[0], maxIndex = 0; // max �ʱ�ȭ �� �ڸ� ����
		for (int j = 1; j < v.size() - i; j++) { //max ã��(�̹� ���ĵ� �κ� ����)
			if (max < v[j]) { //v[j]�� max���� ũ�� 
				max = v[j]; //max�� v[j]�� ����
				maxIndex = j; //maxIndex�� j�� ����
			}
		}
		int last = v.size() - i - 1; // last���� v�迭�� ũ�⿡�� 1�� ���� i�� �� �� 
		int swap; // ��ȯ�ϱ� ���� swap ����

		swap = v[maxIndex]; // 19~21�� ���� max���� last�� ��ġ ��ȯ
		v[maxIndex] = v[last];
		v[last] = swap;
	}
}

void bubbleSort(vector<int>& v) { 
	for (int i = 0; i < v.size(); i++) { //������ ������ŭ �ݺ�
		for (int j = 0; j < v.size() - 1; j++) { 
			if (v[j] > v[j+1]) { // 0��° �����Ϳ� �׿� ������ ��ġ�� ������ ��
				int swap; // 32~35��° �� ���� ������ ��ȯ
				swap = v[j];
				v[j] = v[j + 1];
				v[j + 1] = swap;
			}
		}
	}
}

void insertionSort(vector<int>& v) {
	for (int i = 0; i < v.size(); i++) { // ������ ������ŭ �ݺ�
		int index = i; // �̵��� �����Ͱ� ������� �ڸ� ����
		for (int j = 0; j < i; j++) { // 44~47��°�� ������ �� ��, ���ǿ� �����ϸ� �׿� ���� index�� ���� 
			if (v[i] < v[j]) { 
				index = j;
				break;
			}
		}
		int swap;
		swap = v[i]; // �̵��� ������ ���� ������
	
		for (int j = i - 1 ; j >= index; j--) { // shift
			v[j + 1] = v[j];
		}
		v[index] = swap; // �ڸ� ��ȯ
	}
}

int main() {
	random_device rd; // seed���� ��� ���� random device ����
	mt19937 gen(rd()); //random device�� ���� ���� ���� ���� �ʱ�ȭ
	int n;
	vector<int> v;
	chrono::system_clock::time_point startTime;
	chrono::duration<double> sec;

	cout << "�������� ���� : ";
	cin >> n;
	v.assign(n, 0);
	for (int i = 0; i < n; i++) {
		v[i] = i;
	}
	shuffle(v.begin(), v.end(), gen);

	cout << "\n<<<���� ����>>>\n";
	startTime = chrono::system_clock::now();
	selectionSort(v);
	sec = chrono::system_clock::now() - startTime;
	cout << "����ð� : " << sec.count() << " sec\n";

	shuffle(v.begin(), v.end(), gen);

	cout << "\n<<<���� ����>>>\n";
	startTime = chrono::system_clock::now();
	bubbleSort(v);
	sec = chrono::system_clock::now() - startTime;
	cout << "����ð� : " << sec.count() << " sec\n";

	shuffle(v.begin(), v.end(), gen);

	cout << "\n<<<���� ����>>>\n";
	startTime = chrono::system_clock::now();
	insertionSort(v);
	sec = chrono::system_clock::now() - startTime;
	cout << "����ð� : " << sec.count() << " sec\n";
}

