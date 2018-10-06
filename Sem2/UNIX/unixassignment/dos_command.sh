echo "Enter any given dos command to simulate the respective shell command"
echo "dir) Long lists files in the directory"
echo "copy) Copies files in the directory"
echo "move) Renames files in the directory"
echo "change) Enter into 'some' directory"
echo "use) Use scirpt as command"
echo
echo "Enter the choice : "
read choice

case $choice in

dir) ls -l
			;;
			
copy) echo "Enter files to copy"
			read file1 file2
			cp $file1 $file2
			;;
					
move) echo "Enter files to move contents"
			read file1 file2
			mv $file1 $file2
			;;
			
change) alias change='cd some'
		change
			;;

use) alias use='./file_exist.sh'
		use
			;;
*) echo "Wrong choice"
esac
