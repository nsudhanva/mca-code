echo "Enter a directory name"
# enter 'sud' here
read name
cd $name
files=`ls`

for i in $files
do
  # chmod 777 $i
  if [ -x "$i" -a -e "$i" -a -w "$i" ]
  then
    echo "$i has all permission"
  fi
done
