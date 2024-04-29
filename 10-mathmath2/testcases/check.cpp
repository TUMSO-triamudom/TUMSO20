#include <bits/stdc++.h>
using namespace std;

const int INVALID = -1e9-2224;
vector<pair<int,int> > photos;
int computeAnswer(vector<int> a){
	int n = a.size();
	set<int> s;
	for(int x : a){
		s.insert(x);
	}
	for(int i = 1; i <= n; i++){
		if(s.find(i) == s.end()){
			return INVALID;
		}
	}
	int answer = 0ll;
	for(auto photo : photos){
		int mx = 0;
		int mn = 1e9;
		for(int i = photo.first-1; i <= photo.second-1; i++){
			mx = max(mx, a[i]);
			mn = min(mn, a[i]);
		}
		answer += mx - mn;
	}
	return answer;
}

int n, k;

const string FAILSTR = "FAIL-afsdjklsdfaljkadjsiowerweiouqhnznxciwe";

void pc(int x, int r, int m){
	const double full = 66.0;
	double score = 0.0;
	if(20*x < 9*n*k) score = 20.0*(x-m)/((9*n*k)/20.0 - m) + 5.0;
	else if(x < r) score = 25.0+41.0*log2((x-(9*n*k)/20.0)/(r-(9*n*k)/20.0) + 1);
	else score = full;
	cout << fixed << score/full << endl;
	cerr << "translate:partial" << endl;
	exit(0);
}

void wa(){
	cout << "0.0" << endl;
	cerr << "translate:wrong" << endl;
	exit(0);
}

void ok(){
	cout << "1.0" << endl;
	cerr << "translate:success" << endl;
	exit(0);
}

string readWord(istream& in){
	string out;
	if(in >> out) return out;
	else return FAILSTR;
}

long long readInt(istream& in, long long mn = LLONG_MIN, long long mx = LLONG_MAX){
	string s = readWord(in);
	char* p;
	long long tmp = strtoll(s.c_str(), &p, 10);
	if(*p != 0 || tmp < mn || tmp > mx){
		wa();
	}
	return tmp;
}

int main(int argc, char * argv[])
{
	ifstream inf(argv[1]);
	ifstream ans(argv[2]);
	ifstream ouf(argv[3]);
	n = readInt(inf, 3, 500);
	k = readInt(inf, 2, 500);
	for(int i = 0; i < k; i++){
		int l = readInt(inf, 1, n);
		int r = readInt(inf, l+1, n);
		photos.emplace_back(l,r);
	}
	vector<int> a, b;
	for(int i = 0; i < n; i++){
		int x = readInt(ans, 1, n);
		a.push_back(x);
	}
	for(int i = 0; i < n; i++){
		int x = readInt(ouf, 1, n);
		b.push_back(x);
	}
	if(readWord(ouf) != FAILSTR) wa();
	vector<int> mnans;
	for(int i = 1; i <= n; i++) mnans.push_back(i);
	int m = computeAnswer(mnans);
	int r = computeAnswer(a);
	int x = computeAnswer(b);
	if(x == INVALID) wa();
	if(n <= 9 || k <= 4){
		if(r != x) wa();
		else ok();
	}else{
		if(x >= r) ok();
		else pc(x, r, m);
	}
}