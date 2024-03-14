fn main() {
    let b = false;

    let _v = match b{
        true => 1, // If b is true, 1 is assigned to _v
        
        false => {
            println!("Success");
            panic!("We have no value for false, but we can panic!");
        }
    };

    println!("This line won't be printed");
}
