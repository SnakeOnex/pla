#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<int> v(N);
  for (int n = 0; n < N; n++)
	cin >> v[n];

  int max_sum = 0;
  int sum = 0;
  for (int i = 0; i < N; i++) {
	sum = max(sum, 0) + v[i];
	max_sum = max(max_sum, sum);
  }

  cout << max_sum << endl;

  return 0;
}
