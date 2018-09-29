echo "Enter a number"
read n

function fact()
{
  if [ $n -eq 0 ]
  then
    echo 1
  else
    var=n

    f=$((var - 1))
    f=$(fact $f)
    f=$((f * var))
    echo $f
  fi
}

fact $n
