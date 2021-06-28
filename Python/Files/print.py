#! /usr/bin/python3

file = open( "file.name", 'r' );                                                                    # 'r' for read-mode; 'r+' for read and write mode;
                                                                                                    # 'w' for write-mode; 'w+' for write and append mode;
content = file.read();                                                                              # 'a' for append-mode; 'a+' for append and read mode;

file.seek(0);

contentlines = file.readlines();

lines = [ i.rstrip() for i in contentlines ];

#print( content );
print( contentlines );
#print( lines );
