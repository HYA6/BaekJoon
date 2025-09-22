/*
<백준 1978번 - 소수 찾기>
문제
    주어진 수 N개 중에서 소수가 몇 개인지 찾아서 출력하는 프로그램을 작성하시오.
입력
    첫 줄에 수의 개수 N이 주어진다. N은 100이하이다.
    다음으로 N개의 수가 주어지는데 수는 1,000 이하의 자연수이다.
출력
    주어진 수들 중 소수의 개수를 출력한다.
예시
    <입력1>
    4
    1 3 5 7
    <출력1>
    3
*/

#include<iostream>
using namespace std;

int main() {
    int n, num;
    cin >> n;
    int cnt = n;
    for (int i = 0; i < n; i++) {
        cin >> num;
        if (num == 1) cnt--;
        if (num > 1) {
            // 소수를 찾기 위해 2 ~ num-1까지 나누기 (숫자가 1000까지여서 가능)
            for (int j = 2; j < num; j++) {
                if (num % j == 0) {
                    cnt--;
                    break;
                }
            }
        }
    }
    cout << cnt;
}