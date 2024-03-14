fn main(){
    let s = String::from("Hello World!");

    let f1: &str = &s[0..5]; // using & because a string in rust is just a pointer,
                       // and does not contain the full value of the string.
    let f2: &str = &s[6..12];

    println!("{}\nf1 = {}\nf2 = {}", s, f1, f2);
}
