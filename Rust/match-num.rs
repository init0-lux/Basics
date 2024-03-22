fn main() {
    // code
    for i in 0..=11 { match_n(i); }
}

fn match_n(n:i32) {
    match n{
        1=> println!("one"),
        2 | 3 | 4 | 5 => println!("two to five"),
        6..=10 => println!("six to zehn"),
        _ => println!("-inf to 0 or 0 to +inf"),
    }
    // no semicolon cuz it has to be the return value for func
}
