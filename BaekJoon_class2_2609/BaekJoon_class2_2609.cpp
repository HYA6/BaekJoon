/*
<백준 2609번 - 최대공약수와 최소공배수>
문제
    두 개의 자연수를 입력받아 최대 공약수와 최소 공배수를 출력하는 프로그램을 작성하시오.
입력
    첫째 줄에는 두 개의 자연수가 주어진다. 
    이 둘은 10,000이하의 자연수이며 사이에 한 칸의 공백이 주어진다.
출력
    첫째 줄에는 입력으로 주어진 두 수의 최대공약수를, 둘째 줄에는 입력으로 주어진 두 수의 최소공배수를 출력한다.
예시
    <입력1>
    24 18
    <출력1>
    6
    72
*/

#include <iostream>
using namespace std;

int gcd(int A, int B);

int main() {
    int a, b, max = 0, min = 0;
    cin >> a >> b;

    // 최대공약수
    if (a > b) {
        max = gcd(a, b);
    } else if (a < b) {
        max = gcd(b, a);
    } else {
        max = a;
    }

    // 최소공배수
    min = a * b / max;

    cout << max << '\n' << min;
}

// 최대 공약수 구하기: 유클리드 호제법
int gcd(int a, int b) {
    if (a % b == 0)
        return b;
    else
        return gcd(b, a % b);
}