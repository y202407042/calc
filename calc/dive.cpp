#include "dive.h"
#include "sub.h"

int dive(int x, int y) {
	int count = 0;
	while (x >= y) {
		x = sub(x, y);
		count++;
	}
	return count;
}