echo "Enter a File name"
read file

if [ -e $file ]
then
  echo "1. Using Octal values"
  echo "2. Using Symbolic values"
  echo "3. Exit the script"
  echo "Enter your choice"
  read choice

 case $choice in 
   1) echo "You have selected to change permission using Octal value"
      echo "Enter your value for User"
      read  u
      echo "Enter your value for Group"
      read  g
      echo "Enter your value for Others"
      read  o
      echo "Before changing permission:"
      echo `ls -l $file`

      if test [`sudo chmod $u$g$o $file`]
      then 
        echo "The file permission has been changed successfully"
        echo "Your new file permission is:"
        echo `ls -l $file`
      else
        echo "Error"
      fi
      ;; 
   
      2) echo "You have selected to change permission using Symbolic Representation"
   		
   		echo "1) Add permission"
   		echo "2) Remove permission"
   		read choice

   		case $choice in
   		
      1) echo "Enter to change permission for user or group or owner"
      read  x
      
      echo "For read write or execute permission"
      read  y
      
      echo "Before changing permission:"
      echo `ls -l $file`

      if test [`sudo chmod $x+$y $file`]
      then 
        echo "Permissions has been changed successfully"
        echo "Your new file permission is:"
        echo `ls -l $file`
      else
        echo "Error"
      fi
      ;;
   			
      2)
   		echo "Enter to change permission for user or group or owner"
      read  x
      
      echo "For read write or execute permission"
      read  y
      
      echo "Before changing permission:"
      echo `ls -l $file`

      if test `sudo chmod $x-$y $file`
      then 
        echo "The file permission has been changed successfully"
        echo "Your new file permission is:"
        echo `ls -l $file`
      else
        echo "Error"
      fi
      ;;
   *) echo "Wrong choice"  
    esac
  esac 
else 
  echo "File does not exist"
fi
