#include <cstdio>
#include <cstring>

char s[1111];

int main() {
gets(s), s[0] &= ~32, puts(s);
return 0;
}
