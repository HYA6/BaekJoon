/*
<백준 4153번 - 직각삼각형>
문제
    과거 이집트인들은 각 변들의 길이가 3, 4, 5인 삼각형이 직각 삼각형인것을 알아냈다. 
    주어진 세변의 길이로 삼각형이 직각인지 아닌지 구분하시오.
입력
    입력은 여러개의 테스트케이스로 주어지며 마지막줄에는 0 0 0이 입력된다. 
    각 테스트케이스는 모두 30,000보다 작은 양의 정수로 주어지며, 각 입력은 변의 길이를 의미한다.
출력
    각 입력에 대해 직각 삼각형이 맞다면 "right", 아니라면 "wrong"을 출력한다.
예시
    <입력1>
    6 8 10
    25 52 60
    5 12 13
    0 0 0
    <출력1>
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