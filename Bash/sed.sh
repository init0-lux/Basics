#! /bin/bash

echo -n "Enter filename to substitute using sed: "
read fileName

if [[ -f $fileName ]]; then
	# sed does not edit files, But edits the contents of the file in a stream
	# add g after last / to substitute all occurences. Global
	# use -i flag for editing file natively
	sed 's/Love/LOVE/' $fileName > newfile
	# sed -i 's/Love/LOVE/' $fileName
	echo "Edited file can be found at newfile"
		
	# This works too
	# cat file.txt | sed 's/Love/LOVE/'
else
	echo "$fileName doesn't exist"
fi
