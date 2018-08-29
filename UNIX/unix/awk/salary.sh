awk 'NR>1
{
  a[NR]=$4
}END{
  for(i=2; i<=NR; i++){
    if(a[i]>10000){
      da=a[i]*0.45
      hra=a[i]*0.15
    }
  else{
    da=a[i]*0.5
    hra=a[i]*0.2
  }
  total=a[i]+da+hra
  printf("Basic: %s, DA: %s, HRA: %s, Total: %s\n", a[i], da, hra, total);
}
}' salary.lst
