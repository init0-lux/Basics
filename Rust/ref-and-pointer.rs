fn main(){
    let x : i32 = 10;
    let y : &i32 = &x;

    println!("Value of x: {:?}\nValue of y: {:p}\nValue of *y: {:?}\n", x, y, *y);
    assert_eq!(x, *y);
    println!("Success");
}
