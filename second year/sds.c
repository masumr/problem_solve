int main()
{

  char dest[100] = "geeksfor";
  char *src= "geeks";
  char *str=dest;
  while(src){
    *str+=*src;
    *str++;*src++;
  }
  printf(" %s ",str);
  getchar();
}
