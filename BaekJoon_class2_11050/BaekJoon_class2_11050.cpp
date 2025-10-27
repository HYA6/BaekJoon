/*
<백준 11050번 - 이항 계수 1>
문제
    자연수 N과 정수 K가 주어졌을 때 이항 계수 {N K}를 구하는 프로그램을 작성하시오.
입력
    첫째 줄에 N과 K가 주어진다. (1 ≤ N ≤ 10, 0 ≤ K ≤ N)
출력
    {N K}를 출력한다.
예시
    <입력1>
    5 2
    <출력1>
    10
*/

#include <iostream>
using namespace std;
/*
이항 계수
{N K} = N! / ((N-K)! K!)
*/
int main() {
    int n, k, nk, nP = 1, kP = 1, nkP = 1; // nP: N의 팩토리얼, kP: K의 팩토리얼, nkP: (N-P)의 팩토리얼
    cin >> n >> k;
    nk = n - k;

    for (int i = 1; i <= n; i++) nP *= i;
    for (int i = 1; i <= k; i++) kP *= i;
    for (int i = 1; i <= nk; i++) nkP *= i;

    cout << nP / (nkP * kP) ;
}