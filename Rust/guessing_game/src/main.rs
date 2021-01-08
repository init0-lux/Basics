//use std::io;
use rand::Rng; // Random number generator

fn main(){
    println!("Guess the number!\n");

    let secret = rand::thread_rng().gen_range(1..101); // creates random num between 1 to 100;
    
    println!("Please input your number: ");

    //let mut guess = String::new();

    /*io::stdin()
        .read_line(&mut guess)
        .expect("Failed to read line");
    */

    //println!("You guessed: {}", guess);
    println!("The number was: {}", secret);
}
