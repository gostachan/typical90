#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <cctype>
#include <set>
#include <sstream>
#include <algorithm>
#include <numeric>
#include <ctime>
#include <bit>
#include <unordered_map>
#include <functional>
#include <stack>
#include <cassert>
#include <queue>
using namespace std;
const long long inf = 1LL << 60;
const double pi = 3.141592653589793238;
template<class T> void chmin(T& a, T b) { if (a > b) a = b; }
template<class T> void chmax(T& a, T b) { if (a < b) a = b;
}
long long popcount(unsigned long long n) {
  int count = 0;
  while (n) {
    count += n & 1;
    n >>= 1;
  }
  return count;
}
long long countTwos(long long n) {
    int count = 0;
    while (n > 0 && n % 2 == 0) {
        n /= 2;
        count++;
    }
    return count;
}
template<class T, class U> void coutUnorderdMap(unordered_map<T, U> map){
  for (const auto& pair : map) {
    cout << "key: " << pair.first << ", value: " << pair.second << endl;
  }
}
template<class T> void coutVector(vector<T> vector) {
  for (long long i = 0; i < vector.size(); ++i) {
    cout << vector[i] << " ";
  }
  cout << endl;
}
template<class T> void coutVectorPair(vector<pair<T, T>> vector) {
  for (long long i = 0; i < vector.size(); ++i) {
    cout << vector[i].first << " " << vector[i].second << endl;
  }
} 
template<class T> void coutTwoDimensionalVector(vector<T> vector) {
  for (long long i = 0; i < vector.size(); ++i) {
    for (long long j = 0; j < vector[i].size(); ++j) {
      cout << vector[i][j] << " ";
    }
    cout << endl;
  }
  cout << endl;
}
bool compairBySecond(const pair<long long, long long> &a, const pair<long long, long long> &b) { return a.second < b.second; }
bool compairByFirst(const pair<long long, long long> &a, const pair<long long, long long> &b) { return a.first < b.first; }
#define rep(i, n) for (long long i = 0; i < (long long)(n); ++i)
#define rep2(i, s, n) for (long long i = s; i < (long long)(n); ++i)
using ll = long long;
using vll = vector<ll>;
using vs = vector<string>;
using pllll = pair<ll, ll>; 
using vpllll = vector<pair<ll, ll>>; 
using vvll = vector<vector<ll>>; 
// ----------------------------------------------------------------

int main () {
  ll n, k; cin >> n >> k;
  vll a(n);
  vll b(n);
  rep(i, n) cin >> a[i];
  rep(i, n) cin >> b[i];

  ll diff = 0;
  rep(i, n) {
    diff += abs(a[i] - b[i]);
  }

  if (diff > k || (k - diff) % 2 != 0) {
    cout << "No" << endl;
    return 0;
  }

  cout << "Yes" << endl;


  return 0;
}





















