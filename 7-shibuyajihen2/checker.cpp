#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[]) {
    ifstream in(argv[1]);
    ifstream out(argv[2]);
    ifstream userout(argv[3]);

    int sol;
    out >> sol;

    int user_out;
    userout >> user_out;

    if (user_out < 1 || user_out > 4) {
        cout << 0;
        cerr << "Invalid Output";
        return 0;
    }

    int primes[] = {2, 3, 5, 7};
    int userAns = primes[user_out - 1];

    if (sol % userAns == 0) {
        cout << 1;
        cerr << "translate:success";
    } else {
        cout << 0;
        cerr << "translate:wrong";
    }
}