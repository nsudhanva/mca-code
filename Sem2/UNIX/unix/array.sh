array=(1 5 6 8)
array2=(1 2 3 4)

echo "Enter option"
echo "1. Add element to array"
echo "2. Remove element from array"
echo "3. Length of an array"
echo "4. Length of nth element in array"
echo "5. Copy an array"
echo "6. Concatenate two arrays"

echo ${array[*]}
read choice
case $choice in
  1) echo "Enter the element to be added"
     read element
     array+=($element)
     echo ${array[*]} ;;

  2) echo "Enter the index of element to be deleted"
     read index
     unset array[$index]
     echo ${array[*]} ;;

  3) echo "Length: "
     len=${#array[@]}
     echo $len ;;

  4) echo "Enter the nth element index"
     read index
     echo "Length: "
     echo ${#array[index]} ;;

  5) echo "Copying: "
     array_copy="${array[@]}"
     echo ${array_copy[*]} ;;

  6) echo "Array 1: " ; echo ${array[*]}
     echo "Array 2: " ; echo ${array2[*]}
     array3=("${array[@]}" "${array2[@]}")
     echo "Array 3: " ; echo ${array3[*]} ;;
  *) echo "Error in option: ";;
esac
