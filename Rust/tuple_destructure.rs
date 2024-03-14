fn main() {
    let t: (String, String) = (String::from("Hello"), String::from("World"));
    let (s1, s2) = t.clone(); // not using .clone() would make t unusable;

    println!("{:?}, {:?}, {:?}", s1, s2, t);
}
