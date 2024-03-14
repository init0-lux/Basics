fn main() {
    let s1 = String::from("Hello");
    let s2 = s1; // Here, s1 is dropped;
    let s3 = s2.clone(); // this is called a deep copy;

    // println!("{}, {}", s1, &s1);
    // the above line would throw an error because after s1 is assigned to s2,
    // s1 is dropped. since only the location of the pointer is copied.
    // two variables cant have same pointer or same ownership
    // Use s1.clone();
    println!("{}", s2);
    println!("{}", s3);
}
