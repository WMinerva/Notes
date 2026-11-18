#include "iostream"

using namespace std;

int main() {
	clock_t t_start = clock();
	
	long long n;
	cin >> n;
	long long sum = 0;
	//   400 000 000 = 4*10^8 => ~1seg // Maquina Oscar
    //   600 000 000 = 6*10^8 => ~873 ms // Juki
    // 2 000 000 000 = 2*10^9 => ~1.29s // ideone.com
	// O(n) => 10^6
	for (long long i = 0; i < n; i++) {
		sum += i * 2;
		sum -= i;
	}
	cout << sum << "\n";

	
	clock_t t_end = clock();
	double t = (t_end - t_start) / CLOCKS_PER_SEC;
	printf("%.16lf", t);
	
	return 0;
}
