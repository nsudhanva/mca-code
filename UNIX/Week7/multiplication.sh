echo "Enter a number"
read n

for i in {1..10}
do
  temp=`expr $i \* $n`
  echo "$n * $i = $temp"
done
