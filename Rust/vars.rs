fn main() {
    let x: i32; // if Uninitialised and used, gives an error;
    x = 5;      // No error
    let y: i32; // only a warning, since unused
    
    assert_eq!(x,5); // isEqual?
    println!("Success!");
}
