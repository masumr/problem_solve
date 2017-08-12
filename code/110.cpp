#include <stdio.h>

char space[20] = "                ";
char alpha[20];

void swap (char* a, char* b) {
  char temp = *a;
  *a = *b;
  *b = temp;
}

void dfs(int now, int max) {
  int i;
  if (now == max - 1) {
    printf("%.*s", max * 2, space);
    printf("writeln");
    printf("%.*s%s", max * 2, alpha, ")\n");
    return;
  }
  for (i = 0; i < now + 2; i++) {
    printf("%.*s", 2 + 2 * now, space);
    if (i == 0) printf("if %c < %c then\n", alpha[now * 2 + 1], alpha[now * 2 + 3]);
    else if (i != now + 1) printf("else if %c < %c then\n", alpha[(now - i) * 2 + 1], alpha[(now - i) * 2 + 3]);
    else puts("else");
    dfs(now + 1, max);
    if (i == now + 1) {
      for (i = 0; i < max - 1; i++)
        swap(&alpha[i * 2 + 1], &alpha[i * 2 + 3]);
      return;
    }
    swap(&alpha[(now + 1 - i) * 2 + 1], &alpha[(now + 1 - i) * 2 - 1]);
  }
}

int main() {
  int N;
  scanf("%d", &N);
  while (N--) {
    int i, j, n;
    scanf("%d", &n);
    char rec[20] = "(a,b,c,d,e,f,g,h";
    for (i = 0; i < 20; i++)
      alpha[i] = rec[i];
    puts("program sort(input,output);");
    puts("var");
    printf("%.*s%s", n * 2 - 1, alpha + 1, " : integer;\n");
    printf("begin\n  readln");
    printf("%.*s%s", n * 2, alpha, ");\n");
    dfs(0, n);
    puts("end.");
    if (N) puts("");
  }
  return 0;
}
