awk 'NR>1
{
  s1[NR]=$2
  m1[NR]=$3
  m2[NR]=$4
  m3[NR]=$5
}END{
  for(i=2;i<=NR;i++){
    avg = (m1[i] + m2[i] + m3[i])/3
    printf("Average of %s: %s\n", s1[i], avg)
  }
}
' student.lst
