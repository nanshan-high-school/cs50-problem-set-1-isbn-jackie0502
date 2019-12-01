#include <iostream>
using namespace std;

int main() {
    long long isbn;
    cout << "Isbn:";
    cin >> isbn;
    int total = 0;
    int num = 0;
    num = isbn % 1000000000;
    total += num / 100000000 * 9;
    num = isbn % 100000000;
    total += num / 10000000 * 8;
    num = isbn % 10000000;
    total += num / 1000000 * 7;
    num = isbn % 1000000;
    total += num / 100000 * 6;
    num = isbn % 100000;
    total += num / 10000 * 5;
    num = isbn % 10000;
    total += num / 1000 * 4;
    num = isbn % 1000;
    total += num / 100 * 3;
    num = isbn % 100;
    total += num / 10 * 2;
    num = isbn % 10;
    total += num / 1 * 1;
    if(total % 11 == isbn / 1000000000){;
      cout << "YES";
    }else{;
      cout <<   "NO";
    }

}
