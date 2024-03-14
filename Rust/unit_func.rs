fn main() {
    let s = sum(1, 2);
    let t = sum2(1,2);
    
    println!("{:?}", s);
    println!("{:?}", t);
}

fn sum(x: i32, y: i32) -> i32{ // no semicolon means assignment
    x + y
}

fn sum2(x: i32, y: i32) -> (){ // will be unit type return val, cuz semicolon nullfies
    x + y; 
}
