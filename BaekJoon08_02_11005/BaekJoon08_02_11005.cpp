/*
<���� 11005�� - ���� ��ȯ2>
����
    10���� �� N�� �־�����. �� ���� B�������� �ٲ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
    10������ �Ѿ�� ������ ���ڷ� ǥ���� �� ���� �ڸ��� �ִ�. �̷� ��쿡�� ������ ���� ���ĺ� �빮�ڸ� ����Ѵ�.
    A: 10, B: 11, ..., F: 15, ..., Y: 34, Z: 35
�Է�
    ù° �ٿ� N�� B�� �־�����. (2 �� B �� 36)
    N�� 10�ﺸ�� �۰ų� ���� �ڿ����̴�.
���
    ù° �ٿ� 10���� �� N�� B�������� ����Ѵ�.
����
    <�Է�1>
    60466175 36

    <���1>
    ZZZZZ
*/

#include<iostream>
#include <string>
using namespace std;

int main() {
    string answer = "";
    int question, n;

    cin >> question >> n;

    while (question > 0) {
        char c;
        int remainder = question % n; // 10���� ���� N���� ���� ������ ���ϱ�
        // N�� 10 �̻��̸� ���� ��ȯ
        if (n > 10) {
            if (remainder >= 10) c = remainder + 55;
            else c = remainder + '0';
        } else c = remainder + '0';
        // ���ڸ� �տ� ����
        answer.insert(0, 1, c);
        question /= n; // 10���� ���� N���� ���� ���� ����
    }
    cout << answer;
}