/*
<���� 11050�� - ���� ��� 1>
����
    �ڿ��� N�� ���� K�� �־����� �� ���� ��� {N K}�� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է�
    ù° �ٿ� N�� K�� �־�����. (1 �� N �� 10, 0 �� K �� N)
���
    {N K}�� ����Ѵ�.
����
    <�Է�1>
    5 2
    <���1>
    10
*/

#include <iostream>
using namespace std;
/*
���� ���
{N K} = N! / ((N-K)! K!)
*/
int main() {
    int n, k, nk, nP = 1, kP = 1, nkP = 1; // nP: N�� ���丮��, kP: K�� ���丮��, nkP: (N-P)�� ���丮��
    cin >> n >> k;
    nk = n - k;

    for (int i = 1; i <= n; i++) nP *= i;
    for (int i = 1; i <= k; i++) kP *= i;
    for (int i = 1; i <= nk; i++) nkP *= i;

    cout << nP / (nkP * kP) ;
}