/*
<���� 8958�� - OX����>
����
    "OOXXOXXOOO"�� ���� OX������ ����� �ִ�. O�� ������ ���� ���̰�, X�� ������ Ʋ�� ���̴�. 
    ������ ���� ��� �� ������ ������ �� �������� ���ӵ� O�� ������ �ȴ�. 
    ���� ���, 10�� ������ ������ 3�� �ȴ�.

    "OOXXOXXOOO"�� ������ 1+2+0+0+1+0+0+1+2+3 = 10���̴�.

    OX������ ����� �־����� ��, ������ ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է�
    ù° �ٿ� �׽�Ʈ ���̽��� ������ �־�����. 
    �� �׽�Ʈ ���̽��� �� �ٷ� �̷���� �ְ�, ���̰� 0���� ũ�� 80���� ���� ���ڿ��� �־�����. 
    ���ڿ��� O�� X������ �̷���� �ִ�.
���
    �� �׽�Ʈ ���̽����� ������ ����Ѵ�.
����
    <�Է�1>
    5
    OOXXOXXOOO
    OOXXOOXXOO
    OXOXOXOXOXOXOX
    OOOOOOOOOO
    OOOOXOOOOXOOOOX
    <���1>
    10
    9
    7
    55
    30
*/

#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

vector<string> split(string str, char delimiter);

int main() {
    int t, answer;
    cin >> t;
    string ques;
    for (int i = 0; i < t; i++) {
        answer = 0;
        cin >> ques;
        vector<string> str = split(ques, 'X');
        for (int i = 0; i < str.size(); i++) {
            for (int i = 1; i <= str[i].length(); i++) answer += i;
        }
        cout << answer << "\n";
    }

}

vector<string> split(string input, char delimiter) {
    vector<string> answer;
    stringstream ss(input);
    string temp;
    while (getline(ss, temp, delimiter)) answer.push_back(temp);
    return answer;
}