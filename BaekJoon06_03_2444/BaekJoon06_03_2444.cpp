/*
<���� 2444�� - �� ���>
����
    ������ ���� ��Ģ�� ������ �ڿ� ���� ��� ������.
�Է�
    ù° �ٿ� N(1 �� N �� 100)�� �־�����.
���
    ù° �ٺ��� 2��N-1��° �ٱ��� ���ʴ�� ���� ����Ѵ�.
����
    �Է�
     5

    ���
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n; // ���� �Է¹ޱ�

    int rowcols = 2 * n - 1;

    // 2���� �迭 ���� �Ҵ�
    // 1) new�� �̿��� �Ҵ�
    /*string** star = new string*[rowcols];
    for (int i = 0; i < rowcols; i++) {
        star[i] = new string[rowcols];
    }*/
    // 2) vector�� �̿��� �Ҵ�
    vector<vector<string>> star(rowcols, std::vector<string>(rowcols));

    int standard = rowcols / 2;

    // ���ǿ� �°� ��ĭ�� �� �Է�
    for (int i = 0; i < rowcols; i++) { // ��
        for (int j = 0; j < rowcols; j++) { // ��
            if (i <= standard) {
                if (j <= standard) {
                    if (j >= abs(standard - i)) star[i][j] = "*";
                    else star[i][j] = " ";
                }
                else {
                    if (j <= standard + i) star[i][j] = "*";
                }
            }
            else {
                if (j <= standard) {
                    if (j >= abs(standard - i)) star[i][j] = "*";
                    else star[i][j] = " ";
                }
                else {
                    if (j < rowcols - abs(standard - i)) star[i][j] = "*";
                }
            }
        }
    }

    // ���
    for (int i = 0; i < rowcols; i++) {
        for (int j = 0; j < rowcols; j++) {
            cout << star[i][j];
        }
        cout << "\n";
    }

    return 0;
}