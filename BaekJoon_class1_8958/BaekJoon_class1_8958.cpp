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
using namespace std;

int main() {
    int t, num, answer; // t: �׽�Ʈ ����, num: ������
    cin >> t;
    string ques; // �Է¹޴� ���� ���
    for (int i = 0; i < t; i++) {
        answer = 0;
        num = 0;
        cin >> ques;
        for (int i = 0; i < ques.length(); i++) {
            if (ques[i] == 'O') num++;
            else num = 0;
            answer += num;
        }
        cout << answer << "\n";
    }
}
