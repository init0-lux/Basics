use std::mem::size_of_val;

fn main() {
    let c1: char = 'a'; // specifying : char is obviously not required;
    assert_eq!(size_of_val(&c1), 4);
    println!("{}", size_of_val(&c1)); //4
    print_char('c'); // double quotes wont work, cuz doubles quotes = string
}

fn print_char( c: char ) {
    println!("{}",c);
}
