#pragma warning(disable:4996)

#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>

using namespace std;

int main() {
	char buf = NULL;
	int cnt = 0;

	if ((buf = getc(stdin)) == ' ') {

	}
	while ((buf = getc(stdin)) != '\n') {
		if (buf == ' ') {
			buf = getc(stdin);
			if ( (buf == '\n') || (buf ==' ')) {
				break;
			}
			cnt++;
		}
	}

	printf("%d", ++cnt);

	return 0;
}