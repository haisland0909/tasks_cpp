#include<iostream>
using namespace std;

int main() {
    int no1, no2;
    cout << "整数を入力してください" << endl;
    cin >> no1;
    cout << "整数を入力してください" << endl;
    cin >> no2;
    cout << no1 << "は" << no2 << "の" << no1 * 100 / no2 << "%です。" << endl;

    return 0;
}