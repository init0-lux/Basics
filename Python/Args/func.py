# def func(a, b, c, d):
#    print(a, b, c, d);

# func("O", "S", "Sj", "M");

# convention -> fargs( normal, *args, **kwargs)
def fargs( *args ):
    print( type(args) );
    print( args[0] );
    
    for i in args:
        print(i);

us = ["O", "S", "Sj"];
fargs(*us);
