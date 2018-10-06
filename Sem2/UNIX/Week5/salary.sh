echo "Enter employee salary"
read base

echo "Base Salary = $base"

if [ $base -lt 1500 ]
then
  hra=`expr $base \* 10 / 100`
  da=`expr $base \* 90 / 100`
else 
  hra=500
  da=`expr $base \* 98 / 100`
fi

gross=`expr $base + $hra + $da`
echo "HRA: $hra"
echo "DA: $da"
echo "Gross Salary: $gross"
