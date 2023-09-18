#include <string>
#include <vector>
#include <iostream>
#include <cctype>
#include <algorithm>

using namespace std;

struct fileName {
    string head;
    int number;
    int idx;
};

vector<fileName> file_name;

bool cmp(fileName f1, fileName f2) {
    if (f1.head == f2.head)
    {
        if (f1.number == f2.number)
        {
            return f1.idx < f2.idx;
        }
        else
        {
            return f1.number < f2.number;
        }
    }
    else
    {
        return f1.head < f2.head;
    }
}

vector<string> solution(vector<string> files) {
    vector<string> answer;
    
    for (int i = 0; i < files.size(); i++)
    {
        vector<int> v;
        
        for (int j = 0; j < files[i].size(); j++)
        {
            if ('0' <= files[i][j] && files[i][j] <= '9')
            {
                v.push_back(j);
            }
        }
        string hd, num;
        for (int j = 0; j < v[0]; j++)
        {
            hd += tolower(files[i][j]);
        }
        num = files[i].substr(v[0], v.size());
        fileName fn;
        fn.head = hd;
        fn.number = stoi(num);
        fn.idx = i;
        
        file_name.push_back(fn);
    }
    sort(file_name.begin(), file_name.end(), cmp);
    
    for (int i = 0; i < file_name.size(); i++)
    {
        answer.push_back(files[file_name[i].idx]);
    }
    return answer;
}

int main() {
    vector<string> files = {"img12.png", "img10.png", "img02.png", "img1.png", "IMG01.GIF", "img2.JPG"};
    vector<string> result = solution(files);

    for (auto r : result)
    {
        cout << r << " ";
    }
    cout << "\n";
}
