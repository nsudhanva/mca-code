awk '
{
  a[NR]=$0
}END{
  for(i=NR; i>=1; i--)
    printf("%s\n", a[i]);
}' hello.txt
