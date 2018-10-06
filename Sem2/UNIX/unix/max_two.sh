echo "Enter two numbers"
read a b

function max_num(){
  if [ $a -gt $b ]
  then
    echo "$a is greater"
  else
    echo "$b is greater"
  fi
}

max_num a b
