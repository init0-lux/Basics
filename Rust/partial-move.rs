fn main() {
    #[derive(Debug)]
    struct Person { // customed defined data type
        name: String,
        age: Box<u8>, // heap allocated u 8bit int
    }

    let Jack = Person{ 
        name: String ::from("Jack"),
        age: Box::new(20),
    };

    // Person struct is destructured but using reference of age
    // instead of value
    // now, name is not owned by Jack, and we can't use the Jack instance
    // ie, cant use Jack.name;
    // but can use Jack.age;
    let Person {name, ref age} = Jack;

    println!("Jack is {} years old", age);
    println!("the name is {}", name);

    
}
