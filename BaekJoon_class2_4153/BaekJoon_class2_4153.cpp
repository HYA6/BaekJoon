/*
<���� 4153�� - �����ﰢ��>
����
    ���� ����Ʈ�ε��� �� ������ ���̰� 3, 4, 5�� �ﰢ���� ���� �ﰢ���ΰ��� �˾Ƴ´�. 
    �־��� ������ ���̷� �ﰢ���� �������� �ƴ��� �����Ͻÿ�.
�Է�
    �Է��� �������� �׽�Ʈ���̽��� �־����� �������ٿ��� 0 0 0�� �Էµȴ�. 
    �� �׽�Ʈ���̽��� ��� 30,000���� ���� ���� ������ �־�����, �� �Է��� ���� ���̸� �ǹ��Ѵ�.
���
    �� �Է¿� ���� ���� �ﰢ���� �´ٸ� "right", �ƴ϶�� "wrong"�� ����Ѵ�.
����
    <�Է�1>
    6 8 10
    25 52 60
    5 12 13
    0 0 0
    <���1>
    right
    wrong
    right
*/

#include<iostream>
#include<math.h>
using namespace std;

int main() {
    int a, b, c;
    while (true) {
        cin >> a >> b >> c;
        if (a == 0 || b == 0 || c == 0) break;
        cout << "\n";
        if (a > b && a > c) {
            if (pow(a, 2) == pow(b, 2) + pow(c, 2)) cout << "right";
            else cout << "wrong";
        }
        else if (b > a && b > c) {
            if (pow(b, 2) == pow(a, 2) + pow(c, 2)) cout << "right";
            else cout << "wrong";
        }
        else if (c > a && c > b) {
            if (pow(c, 2) == pow(a, 2) + pow(b, 2)) cout << "right";
            else cout << "wrong";
        }
    }
}