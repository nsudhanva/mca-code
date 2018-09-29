if test $# -ne 2
then
  echo "Please provide proper arguments"
else
  compare=`cmp $1 $2`
  echo "compare = $compare"

  if [ -z "$compare" ]
    then
      echo "Same files"
      rm $2
  else
    echo "Different files"
  fi
fi
