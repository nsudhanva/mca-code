num=$#
rem=`expr $num % 2`

if [ $rem -eq 0 ]
then
    for i in $num
    do
      echo $i
    done
else
  echo "Odd number of params"
fi
