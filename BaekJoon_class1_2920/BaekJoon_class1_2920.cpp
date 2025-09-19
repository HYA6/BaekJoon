/*
<백준 2920번 - 음계>
문제
    다장조는 c d e f g a b C, 총 8개 음으로 이루어져있다. 
    이 문제에서 8개 음은 다음과 같이 숫자로 바꾸어 표현한다. c는 1로, d는 2로, ..., C를 8로 바꾼다.

    1부터 8까지 차례대로 연주한다면 ascending, 
    8부터 1까지 차례대로 연주한다면 descending, 
    둘 다 아니라면 mixed 이다.

    연주한 순서가 주어졌을 때, 이것이 ascending인지, descending인지, 아니면 mixed인지 판별하는 프로그램을 작성하시오.
입력
    첫째 줄에 8개 숫자가 주어진다. 이 숫자는 문제 설명에서 설명한 음이며, 1부터 8까지 숫자가 한 번씩 등장한다.
출력
    첫째 줄에 ascending, descending, mixed 중 하나를 출력한다.
예시
    <입력1>
    1 2 3 4 5 6 7 8
    <출력1>
    ascending
    -----------------------------
    <입력2>
    8 7 6 5 4 3 2 1
    <출력2>
    descending
    -----------------------------
    <입력3>
    8 1 7 2 6 3 5 4
    <출력3>
    mixed
*/

#include<iostream>
using namespace std;

int main() {
    int arr[8];
    bool as = false, des = false, mix = false; // 이 중에서 true가 되면 답이 됨
    string answer;

    // 배열에 입력받기
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