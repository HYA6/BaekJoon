/*
<백준 2108번 - 통계학>
문제
    수를 처리하는 것은 통계학에서 상당히 중요한 일이다. 
    통계학에서 N개의 수를 대표하는 기본 통계값에는 다음과 같은 것들이 있다. 단, N은 홀수라고 가정하자.
        산술평균 : N개의 수들의 합을 N으로 나눈 값
        중앙값 : N개의 수들을 증가하는 순서로 나열했을 경우 그 중앙에 위치하는 값
        최빈값 : N개의 수들 중 가장 많이 나타나는 값
        범위 : N개의 수들 중 최댓값과 최솟값의 차이
    N개의 수가 주어졌을 때, 네 가지 기본 통계값을 구하는 프로그램을 작성하시오.
입력
    첫째 줄에 수의 개수 N(1 ≤ N ≤ 500,000)이 주어진다. 단, N은 홀수이다. 
    그 다음 N개의 줄에는 정수들이 주어진다. 입력되는 정수의 절댓값은 4,000을 넘지 않는다.
출력
    첫째 줄에는 산술평균을 출력한다. 소수점 이하 첫째 자리에서 반올림한 값을 출력한다.

    둘째 줄에는 중앙값을 출력한다.

    셋째 줄에는 최빈값을 출력한다. 여러 개 있을 때에는 최빈값 중 두 번째로 작은 값을 출력한다.

    넷째 줄에는 범위를 출력한다.
예시
    <입력1>
    5
    1
    3
    8
    -2
    2
    <출력1>
    2
    2
    1
    10
    ----------------------
    <입력2>
    1
    4000
    <출력2>
    4000
    4000
    4000
    0
    ----------------------
    <입력3>
    5
    -1
    -2
    -3
    -1
    -2
    <출력3>
    -2
    -2
    -1
    2
    ----------------------
    <입력4>
    3
    0
    0
    -1
    <출력4>
    0
    0
    0
    1
*/

/*
산술평균 : N개의 수들의 합을 N으로 나눈 값
중앙값 : N개의 수들을 증가하는 순서로 나열했을 경우 그 중앙에 위치하는 값
최빈값 : N개의 수들 중 가장 많이 나타나는 값
범위 : N개의 수들 중 최댓값과 최솟값의 차이

첫째 줄에는 산술평균을 출력한다. 소수점 이하 첫째 자리에서 반올림한 값을 출력한다.
둘째 줄에는 중앙값을 출력한다.
셋째 줄에는 최빈값을 출력한다. 여러 개 있을 때에는 최빈값 중 두 번째로 작은 값을 출력한다.
넷째 줄에는 범위를 출력한다.
*/
#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>
using namespace std;

int main() {
    int n, num, sum = 0, mean, median, mode, range; // mean: 산술평균, median: 중앙값, mode: 최빈값, range: 범위
    cin >> n;
    vector<int> number(n), count(8001, 0), maxNum;

    for (int i = 0; i < n; i++) {
        cin >> num;
        number[i] = num;
        sum += num;
    }

    // 산술평균
    mean = round((double)sum / (double)n);


    // 중앙값
    sort(number.begin(), number.end()); // 오름차순으로 정렬
    median = number[n / 2];


    // 최빈값
    for (int i : number) count[i + 4000]++; // 각 숫자의 개수 저장

    int maxCnt = *max_element(count.begin(), count.end()); // 저장된 개수가 가장 큰 수

    for (int i = 0; i < count.size(); i++) // maxNum에 최빈값 후보들 저장
        if (count[i] == maxCnt) maxNum.emplace_back(i - 4000);

    if (maxNum.size() == 1) mode = maxNum[0]; // maxNum이 하나일 때
    else { // maxNum이 여러 개일 때
        sort(maxNum.begin(), maxNum.end()); // 오름차순 정렬
        mode = maxNum[1];
    }


    // 범위
    range = number[n-1] - number[0];

    cout << mean << "\n" << median << "\n" << mode << "\n" << range;
}