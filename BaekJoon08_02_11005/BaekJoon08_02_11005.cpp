/*
<백준 11005번 - 진법 변환2>
문제
    10진법 수 N이 주어진다. 이 수를 B진법으로 바꿔 출력하는 프로그램을 작성하시오.
    10진법을 넘어가는 진법은 숫자로 표시할 수 없는 자리가 있다. 이런 경우에는 다음과 같이 알파벳 대문자를 사용한다.
    A: 10, B: 11, ..., F: 15, ..., Y: 34, Z: 35
입력
    첫째 줄에 N과 B가 주어진다. (2 ≤ B ≤ 36)
    N은 10억보다 작거나 같은 자연수이다.
출력
    첫째 줄에 10진법 수 N을 B진법으로 출력한다.
예시
    <입력1>
    60466175 36

    <출력1>
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
        int remainder = question % n; // 10진법 수를 N으로 나눈 나머지 구하기
        // N이 10 이상이면 문자 변환
        if (n > 10) {
            if (remainder >= 10) c = remainder + 55;
            else c = remainder + '0';
        } else c = remainder + '0';
        // 문자를 앞에 삽입
        answer.insert(0, 1, c);
        question /= n; // 10진법 수를 N으로 나눠 새로 저장
    }
    cout << answer;
}