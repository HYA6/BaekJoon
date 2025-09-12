/*
<백준 2745번 - 진법 변환>
문제
    B진법 수 N이 주어진다. 이 수를 10진법으로 바꿔 출력하는 프로그램을 작성하시오.
    10진법을 넘어가는 진법은 숫자로 표시할 수 없는 자리가 있다. 이런 경우에는 다음과 같이 알파벳 대문자를 사용한다.
    A: 10, B: 11, ..., F: 15, ..., Y: 34, Z: 35
입력
    첫째 줄에 N과 B가 주어진다. (2 ≤ B ≤ 36)
    B진법 수 N을 10진법으로 바꾸면, 항상 10억보다 작거나 같다.
출력
    첫째 줄에 B진법 수 N을 10진법으로 출력한다.
예시
    <입력1>
    ZZZZZ 36

    <출력1>
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

    // 문자를 숫자로 변환하기
    for (int i = 0; i < str.length(); i++) {
        if (65 <= str[i] && str[i] <= 90) // 문자열이면
            arr[str.length() - i - 1] = str[i] - 55;
        else // 문자열이 아니면
            arr[str.length() - i - 1] = str[i] - '0';
    }

    // 진법 계산
    for (int i = 0; i < str.length(); i++) {
        answer += arr[i] * pow(n, i);
    }

    cout << answer;
}