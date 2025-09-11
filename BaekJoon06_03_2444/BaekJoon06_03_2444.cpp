/*
<백준 2444번 - 별 찍기>
문제
    예제를 보고 규칙을 유추한 뒤에 별을 찍어 보세요.
입력
    첫째 줄에 N(1 ≤ N ≤ 100)이 주어진다.
출력
    첫째 줄부터 2×N-1번째 줄까지 차례대로 별을 출력한다.
예시
    입력
     5

    출력
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
    cin >> n; // 숫자 입력받기

    int rowcols = 2 * n - 1;

    // 2차원 배열 동적 할당
    // 1) new를 이용한 할당
    /*string** star = new string*[rowcols];
    for (int i = 0; i < rowcols; i++) {
        star[i] = new string[rowcols];
    }*/
    // 2) vector를 이용한 할당
    vector<vector<string>> star(rowcols, std::vector<string>(rowcols));

    int standard = rowcols / 2;

    // 조건에 맞게 빈칸과 별 입력
    for (int i = 0; i < rowcols; i++) { // 행
        for (int j = 0; j < rowcols; j++) { // 열
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

    // 출력
    for (int i = 0; i < rowcols; i++) {
        for (int j = 0; j < rowcols; j++) {
            cout << star[i][j];
        }
        cout << "\n";
    }

    return 0;
}