#include <bits/stdc++.h>

using namespace std;

inline double roundToTwoDp(double score) {
  return round(score * 100) / 100;
}

int main(int argc, char *argv[]) {
  ifstream in(argv[1]);
  ifstream out(argv[2]);
  ifstream userout(argv[3]);
  string start_secret = "wyA%ab\\?N2";
  string end_secret = ")b-0Xsmbjm";
  string secret;
  if (!(userout >> secret)) {
    cout << 0;
    cerr << "Test Invalid (CODE: SS)";
    exit(0);
  }
  if (secret != start_secret) {
    cout << 0;
    cerr << "Gean Detected!!! No I/O Allowed (CODE: SS)";
    exit(0);
  }
  int op;
  if (!(userout >> op)) {
    cout << 0;
    cerr << "Test Invalid (CODE: OP)";
    exit(0);
  }
  if (op == -1) {
    string verdict;
    if (!getline(userout, verdict)) {
      cout << 0;
      cerr << "Test Invalid (CODE: VERDICT)";
      exit(0);
    }
    if (!(userout >> secret)) {
      cout << 0;
      cerr << "Test Invalid (CODE: ES1)";
      exit(0);
    }
    if (secret != end_secret) {
      cout << 0;
      cerr << "Gean Detected!!! No I/O Allowed (CODE: ES1)";
      exit(0);
    }
    cout << 0;
    cerr << verdict;
    exit(0);
  }
  if (op == 0) {
    if (!(userout >> secret)) {
      cout << 0;
      cerr << "Test Invalid (CODE: ES2)";
      exit(0);
    }
    if (secret != end_secret) {
      cout << 0;
      cerr << "Gean Detected!!! No I/O Allowed (CODE: ES2)";
      exit(0);
    }
    cout << 0;
    cerr << "translate:wrong";
    exit(0);
  }
  if (op == 1) {
    int K;
    if (!(userout >> K)) {
      cout << 0;
      cerr << "Test Invalid (CODE: ANS)";
    }
    if (!(userout >> secret)) {
      cout << 0;
      cerr << "Test Invalid (CODE: ES3)";
      exit(0);
    }
    if (secret != end_secret) {
      cout << 0;
      cerr << "Gean Detected!!! No I/O Allowed (CODE: ES3)";
      exit(0);
    }
    if (K < 0) {
      cout << 0;
      cerr << "Invalid answer";
      exit(0);
    }
    int S;
    if (!(out >> S)) {
      cout << 0;
      cerr << "Test Invalid (CODE: NS)";
      exit(0);
    }
    if (S < 0) {
      cout << 0;
      cerr << "Invalid solution";
      exit(0);
    }
    if (K <= S) {
      cout << 1;
      cerr << "translate:success";
      exit(0);
    } else {
	double realscore = 1.0*S/K;
      cout << (0.99*pow(realscore, 1.4));
      cerr << "translate:partial";
      exit(0);
    }
  }
  cout << 0;
  cerr << "Test Invalid (CODE: OPL)";
  exit(0);
}