time=`date +'%H'`
echo $time

if [ $time -lt 12 ]
then
  echo "Good morning"
elif [ $time -gt 14 ]
  echo "Good Evening"
else
  echo "Good day"
fi
