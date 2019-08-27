#include <bits/stdc++.h>
using namespace std;

/*
 * n^3 solution to the high subset sum problem
 *
 */


int main() {
  int N;
  cin >> N;

  vector<int> v(N);
  for (int n = 0; n < N; n++)
	cin >> v[n];

  int max_sum = 0;

  for (int i = 0; i < N; i++) {
	for (int j = i; j < N; j++) {
	  int sum = 0;
	  for (int k = i; k < j + 1; k++) {
		sum += v[k];
	  }
	  max_sum = max(max_sum, sum);
	}
  }

  cout << max_sum << endl;




  return 0;
}
