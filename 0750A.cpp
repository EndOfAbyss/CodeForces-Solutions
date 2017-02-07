#include <iostream>

using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	
	int timeProblemsMax = 240 - k;
	
	int timeProblems = 0;
	
	int i=1;
	while(i<=n && timeProblems < timeProblemsMax) {
		timeProblems += 5*i;
		if(timeProblems > timeProblemsMax) {
			cout << i -1;
			exit(0);
		}
		
		i++;
	}
	
	cout << i-1;
	
	return 0;
}
