if test -f $1
  then
    echo "Ordinary file"
  elif test -d $1
    then
    echo "Directory"
  else
    echo "File doesnt exist"
  fi
fi
 
