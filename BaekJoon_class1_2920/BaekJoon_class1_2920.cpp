/*
<���� 2920�� - ����>
����
    �������� c d e f g a b C, �� 8�� ������ �̷�����ִ�. 
    �� �������� 8�� ���� ������ ���� ���ڷ� �ٲپ� ǥ���Ѵ�. c�� 1��, d�� 2��, ..., C�� 8�� �ٲ۴�.

    1���� 8���� ���ʴ�� �����Ѵٸ� ascending, 
    8���� 1���� ���ʴ�� �����Ѵٸ� descending, 
    �� �� �ƴ϶�� mixed �̴�.

    ������ ������ �־����� ��, �̰��� ascending����, descending����, �ƴϸ� mixed���� �Ǻ��ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է�
    ù° �ٿ� 8�� ���ڰ� �־�����. �� ���ڴ� ���� ������ ������ ���̸�, 1���� 8���� ���ڰ� �� ���� �����Ѵ�.
���
    ù° �ٿ� ascending, descending, mixed �� �ϳ��� ����Ѵ�.
����
    <�Է�1>
    1 2 3 4 5 6 7 8
    <���1>
    ascending
    -----------------------------
    <�Է�2>
    8 7 6 5 4 3 2 1
    <���2>
    descending
    -----------------------------
    <�Է�3>
    8 1 7 2 6 3 5 4
    <���3>
    mixed
*/

#include<iostream>
using namespace std;

int main() {
    int arr[8];
    bool as = false, des = false, mix = false; // �� �߿��� true�� �Ǹ� ���� ��
    string answer;

    // �迭�� �Է¹ޱ�
    for (int i = 0; i < 8; i++) cin >> arr[i];

    if (arr[0] == 1) {
        for (int i = 0; i < 8; i++) {
            if (arr[i] != i - 1) {
                as = false;
                mix = true;
                break;
            }
            else as = true;
        }
    }
    else if (arr[0] == 8) {
        for (int i = 0; i < 8; i++) {
            if (arr[8-i-1] != i - 1) {
                des = false;
                mix = true;
                break;
            }
            else des = true;
        }
    }
    else mix = true;

    if (as) answer = "ascending";
    else if (des) answer = "descending";
    else if (mix) answer = "mixed";

    cout << answer;
}