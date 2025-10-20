/*
<백준 10989번 - 수 정렬하기 3>
문제
    N개의 수가 주어졌을 때, 이를 오름차순으로 정렬하는 프로그램을 작성하시오.
입력
    첫째 줄에 수의 개수 N(1 ≤ N ≤ 10,000,000)이 주어진다. 
    둘째 줄부터 N개의 줄에는 수가 주어진다. 이 수는 10,000보다 작거나 같은 자연수이다.
출력
    첫째 줄부터 N개의 줄에 오름차순으로 정렬한 결과를 한 줄에 하나씩 출력한다.
예시
    <입력1>
    10
    5
    2
    3
    1
    4
    2
    3
    5
    1
    7
    <출력1>
    1
    1
    2
    2
    3
    3
    4
    5
    5
    7
*/

#include <iostream>
using namespace std;

// 시간복잡도가 가장 작은 계수 정렬 사용

int main() {

    // 시간 초과 방지 코드
    ios_base::sync_with_stdio(false); // stream의 동기화 비활성화
    cin.tie(NULL); // 평소 cin과 cout가 묶여있는 걸 풀어줌 -> cin.tie(0)도 가능
    cout.tie(NULL);

    int numbers[10001] = { 0 };

    int n, num;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> num;
        numbers[num]++;
    }

    for (int i = 1; i < 10001; i++)
        for (int j = 0; j < numbers[i]; j++)
            cout << i << "\n";
}