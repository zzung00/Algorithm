#include <iostream>
#include <random>
#include <vector>
#include <chrono>
#include <algorithm>

using namespace std;

void selectionSort(vector<int>& v) {
	for (int i = 0; i < v.size(); i++) { //데이터 개수만큼 반복
		int max = v[0], maxIndex = 0; // max 초기화 및 자리 선언
		for (int j = 1; j < v.size() - i; j++) { //max 찾기(이미 정렬된 부분 제외)
			if (max < v[j]) { //v[j]가 max보다 크면 
				max = v[j]; //max를 v[j]로 지정
				maxIndex = j; //maxIndex를 j로 지정
			}
		}
		int last = v.size() - i - 1; // last값은 v배열의 크기에서 1을 빼고 i를 뺀 값 
		int swap; // 교환하기 위해 swap 선언

		swap = v[maxIndex]; // 19~21번 줄은 max값과 last값 위치 교환
		v[maxIndex] = v[last];
		v[last] = swap;
	}
}

void bubbleSort(vector<int>& v) { 
	for (int i = 0; i < v.size(); i++) { //데이터 개수만큼 반복
		for (int j = 0; j < v.size() - 1; j++) { 
			if (v[j] > v[j+1]) { // 0번째 데이터와 그에 오른쪽 위치한 데이터 비교
				int swap; // 32~35번째 줄 비교한 데이터 교환
				swap = v[j];
				v[j] = v[j + 1];
				v[j + 1] = swap;
			}
		}
	}
}

void insertionSort(vector<int>& v) {
	for (int i = 0; i < v.size(); i++) { // 데이터 개수만큼 반복
		int index = i; // 이동할 데이터가 가고싶은 자리 선언
		for (int j = 0; j < i; j++) { // 44~47번째줄 데이터 비교 후, 조건에 부합하면 그에 따라 index값 변경 
			if (v[i] < v[j]) { 
				index = j;
				break;
			}
		}
		int swap;
		swap = v[i]; // 이동할 데이터 따로 빼놓음
	
		for (int j = i - 1 ; j >= index; j--) { // shift
			v[j + 1] = v[j];
		}
		v[index] = swap; // 자리 교환
	}
}

int main() {
	random_device rd; // seed값을 얻기 위한 random device 생성
	mt19937 gen(rd()); //random device를 통해 난수 생성 엔진 초기화
	int n;
	vector<int> v;
	chrono::system_clock::time_point startTime;
	chrono::duration<double> sec;

	cout << "데이터의 개수 : ";
	cin >> n;
	v.assign(n, 0);
	for (int i = 0; i < n; i++) {
		v[i] = i;
	}
	shuffle(v.begin(), v.end(), gen);

	cout << "\n<<<선택 정렬>>>\n";
	startTime = chrono::system_clock::now();
	selectionSort(v);
	sec = chrono::system_clock::now() - startTime;
	cout << "실행시간 : " << sec.count() << " sec\n";

	shuffle(v.begin(), v.end(), gen);

	cout << "\n<<<버블 정렬>>>\n";
	startTime = chrono::system_clock::now();
	bubbleSort(v);
	sec = chrono::system_clock::now() - startTime;
	cout << "실행시간 : " << sec.count() << " sec\n";

	shuffle(v.begin(), v.end(), gen);

	cout << "\n<<<삽입 정렬>>>\n";
	startTime = chrono::system_clock::now();
	insertionSort(v);
	sec = chrono::system_clock::now() - startTime;
	cout << "실행시간 : " << sec.count() << " sec\n";
}

