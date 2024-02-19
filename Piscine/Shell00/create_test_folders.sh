#Creating test folders. Second try. Accidentally erased my script the first time.

#Clean up the folder
echo "Cleaning up the folder."
rm -rf test*

#Next, create the folders
echo "Creating the folders."
mkdir test0 test2
chmod 715 test0
touch -a -m -t 202306012047 test0
chmod 504 test2
touch -a -m -t 202306012245 test2
echo "Finished creating folders."

#Third, the files
echo "Creating files."
echo -n "0000" > test1
touch -a -m -t 202306012146 test1
echo -n "0" > test3
touch -a -m -t 202306012344 test3
echo -n "00" > test4
touch -a -m -t 202306012343 test4
#echo -n "0" > test5
#touch -a -m -t 202306012344 test5
ln test3 test5
echo "Finished creating files."

#Fourth, the symlink.
echo "Creating symlink."
ln -s test0 test6

echo "FINISHED."
