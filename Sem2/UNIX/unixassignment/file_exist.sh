echo "Enter the filename to create a new file"
read file

if [ -e $file ]
then
echo "File is already existing"
else
touch $file
echo "File created successfully"
fi  
