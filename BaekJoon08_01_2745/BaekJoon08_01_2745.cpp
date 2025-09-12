/*
<���� 2745�� - ���� ��ȯ>
����
    B���� �� N�� �־�����. �� ���� 10�������� �ٲ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
    10������ �Ѿ�� ������ ���ڷ� ǥ���� �� ���� �ڸ��� �ִ�. �̷� ��쿡�� ������ ���� ���ĺ� �빮�ڸ� ����Ѵ�.
    A: 10, B: 11, ..., F: 15, ..., Y: 34, Z: 35
�Է�
    ù° �ٿ� N�� B�� �־�����. (2 �� B �� 36)
    B���� �� N�� 10�������� �ٲٸ�, �׻� 10�ﺸ�� �۰ų� ����.
���
    ù° �ٿ� B���� �� N�� 10�������� ����Ѵ�.
����
    <�Է�1>
    ZZZZZ 36

    <���1>
    60466175
*/

#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

int main() {
    string str;
    int n, answer = 0;

    cin >> str >> n;

    vector<int> arr(str.length());

    // ���ڸ� ���ڷ� ��ȯ�ϱ�
    for (int i = 0; i < str.length(); i++) {
        if (65 <= str[i] && str[i] <= 90) // ���ڿ��̸�
            arr[str.length() - i - 1] = str[i] - 55;
        else // ���ڿ��� �ƴϸ�
            arr[str.length() - i - 1] = str[i] - '0';
    }

    // ���� ���
    for (int i = 0; i < str.length(); i++) {
        answer += arr[i] * pow(n, i);
    }

    cout << answer;
}