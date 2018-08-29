echo "Enter file name"
read file_name
echo "Before changing permissions"
echo `ls -l $file_name`
echo "Enter the way you want to change permissions"
echo "1. Symbolic"
echo "2. Octal"
read choice

case $choice in
    1)  chmod u+x $file_name
        chmod g+wx $file_name
        chmod o+r $file_name
        ;;
    2)  chmod 755 $file_name
        chmod 743 $file_name
        chmod 777 $file_name
        ;;
    *)
        echo "Invalid input"
        ;;
esac
