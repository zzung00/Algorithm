#include <string>
#include <vector>
#include <iostream>
#include <map>
#include <sstream>
#include <cmath>

using namespace std;

int calc(string in, string out) {
    int in_h = stoi(in.substr(0, 2));
    int in_m = stoi(in.substr(3, 2));
    int out_h = stoi(out.substr(0, 2));
    int out_m = stoi(out.substr(3, 2));
    
    return (out_h - in_h) * 60 + (out_m - in_m);
}

vector<int> solution(vector<int> fees, vector<string> records) {
    vector<int> answer;
    map<string, vector<string>> cars;
    stringstream ss;
    
    for (auto record : records)
    {
        string time, num, status;
        ss.str(record);
        ss >> time >> num >> status;
        cars[num].push_back(time);
        ss.clear();
    }
    for (auto car : cars)
    {
        if (car.second.size() % 2 != 0)
        {
            car.second.push_back("23:59");
        }
        vector<string> v = car.second;
        int sum = 0;
        
        for (int i = 0; i < v.size(); i+=2)
        {
            sum += calc(v[i], v[i + 1]);
        }
        int price = fees[1];
        
        if (sum > fees[0])
        {
            price += ceil((sum - fees[0]) / (double)fees[2]) * fees[3];
        }
        answer.push_back(price);
    }
    return answer;
}

int main() {
    vector<int> fees = {180, 5000, 10, 600};
    vector<string> records = {"05:34 5961 IN", "06:00 0000 IN", "06:34 0000 OUT", "07:59 5961 OUT", "07:59 0148 IN", "18:59 0000 IN", "19:09 0148 OUT", "22:59 5961 IN", "23:00 5961 OUT"};
    vector<int> result = solution(fees, records);

    for (int r : result)
    {
        cout << r << " ";
    }
    cout << "\n";
}