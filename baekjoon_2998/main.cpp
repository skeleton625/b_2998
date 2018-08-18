#include <iostream>
#include <string.h>
using namespace std;

char i1[101], r[101];
int c;

int main() {
	cin >> i1;
	for (int i = strlen(i1) - 1; i >= 0; i-=3) {
		if (i >= 2) {
			r[c++] = ((i1[i-2] - '0') * 4 + (i1[i - 1] - '0') * 2 + i1[i] - '0')+48;
		} else if(i == 1){
			r[c++] = ((i1[i-1] - '0') * 2 + i1[i] - '0')+48;
		} else {
			r[c++] = i1[i];
		}
	}
	while (c > 0) cout << r[--c];
	return 0;
}