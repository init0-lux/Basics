fn main() {
    let s1 = String::from("Hello");
    let len = calc_len(&s1); //passing the reference to s1;

    println!("length of {} is {}", s1, len);
}

// Here, s points to s1 rather than the heap allocated pointer of s1
fn calc_len(s : &String) -> usize {
    s.len()
}
