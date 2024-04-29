#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <algorithm>
using namespace std;

std::ofstream result("grader_result.txt");
void correct() {
	::result << 'P';
	::exit(0);
}
void wrong() {
	::result << 'W';
	::exit(0);
}
int main(int argc, char* argv[]) {
	std::ifstream sol(argv[1]);
	std::ifstream inp(argv[2]);
	std::ifstream cod(argv[3]);
	std::ifstream out("output.txt");

    int num;
    sol >> num;

    int user_out;
    out >> user_out;

    if (user_out < 1 || user_out > 4) {
        wrong();
        cerr << "Invalid Output";
        return 0;
    }

    int primes[] = {2, 3, 5, 7};
    int userAns = primes[user_out - 1];

    if (num % userAns == 0) {
        correct();
        cerr << "translate:success";
    } else {
        wrong();
        cerr << "translate:wrong";
    }
}