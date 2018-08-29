echo "Enter a file"
read file

echo "Enter directory 1"
read dir1

echo "Enter directory 2"
read dir2

cd $dir2

if [ -e $file ]
then
    echo "File Exists"
    cd ..
else    
    cp /home/nsudhanva/sudhanva/unix/$dir1/$file /home/nsudhanva/sudhanva/unix/$dir2
    cp -n /home/nsudhanva/sudhanva/unix/$dir2/$file /home/nsudhanva/sudhanva/unix/$dir1
    echo "File copied successfully..."
fi

