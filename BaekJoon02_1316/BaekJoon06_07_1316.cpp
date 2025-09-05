/*
<백준 1316번 - 그룹 단어 체커>
문제
    그룹 단어란 단어에 존재하는 모든 문자에 대해서, 각 문자가 연속해서 나타나는 경우만을 말한다.
    예를 들면, ccazzzzbb는 c, a, z, b가 모두 연속해서 나타나고, kin도 k, i, n이 연속해서 
    나타나기 때문에 그룹 단어이지만, aabbbccb는 b가 떨어져서 나타나기 때문에 그룹 단어가 아니다.
    단어 N개를 입력으로 받아 그룹 단어의 개수를 출력하는 프로그램을 작성하시오.
입력
    첫째 줄에 단어의 개수 N이 들어온다. 
    N은 100보다 작거나 같은 자연수이다. 
    둘째 줄부터 N개의 줄에 단어가 들어온다. 
    단어는 알파벳 소문자로만 되어있고 중복되지 않으며, 길이는 최대 100이다.
출력
    첫째 줄에 그룹 단어의 개수를 출력한다.
예시
     입력       출력
    3             3
    happy
    new
    year

    4             1
    aba
    abab
    abcabc
    a

    5             4
    ab
    aa
    aca
    ba
    bb
*/

#include <iostream>
using namespace std;

int main() {
    int n; // 단어의 개수
    string s; // 확인할 문자
    int count = 0; // 그룹 문자가 아닌 개수
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> s;

        bool alpha[26] = { false, };

        alpha[s[0] - 'a'] = true; // 첫 번째 단어 true로 변경

        for (int j = 1; j < s.length(); j++) {
            if (s[j] == s[j - 1]) continue; // 이전 글자와 같으면(연속이면) 넘어감

            else if (alpha[s[j] - 'a'] == true) { // 이전 글자와 같지 않은데 이미 나왔다면
                count++;
                break;
            }

            else alpha[s[j] - 'a'] = true; // 불연속적이며 이전에 나오지 않은 경우 true로 변경
        }
    }
    cout << n - count;
}