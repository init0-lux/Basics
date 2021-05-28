#! /usr/bin/python3

class Person:

    def __init__( self, name, gender, age, height ):
        self.name = name;
        self.gender = gender;
        self.age = age;
        self.height = height;

    def eat( self ):
        print ("Eating");

    def walk( self ):
        print ("Walking");

    def getName( self ):
        return self.name;

    def getAge( self ):
        return self.age;

class Student( Person ):
    rollNo = 0;
    Marks = 100;

    def attClass( self ):
        print( "Attending Classes..." );

person = Person( "Ojaswi", "Male", 14, 160 );
person2 = Person( "Elliot", "Imaginary", 14, 162 );

person.eat();
person.walk();
print( person.getName() );
print( person.getAge() );

person2.eat();
person2.walk();
print( person2.getName() );
print( person2.getAge() );

student = Student( "Ojaswi", "Male", 25, 260 );

student.eat();
student.attClass();
print( student.rollNo );
