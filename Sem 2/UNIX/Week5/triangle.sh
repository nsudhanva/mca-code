echo "Enter base and height"
read b h

area=`echo 0.5 * $b * $h | bc`
echo $area
