// tuples can hold multiple types

fn main() {
    let _t0: (u8, i16) = (0, -1);
    let _t1: (u8, (i16, u32)) = (0, (-1, 39));

    let t: (i32, i32, String) = (1, 3, String::from("Hello World"));

    // indexing and accessing
    println!("{}, {}", t.1, t.2);

    // Long tuples can't be printed; Only upto 12;
    let long_t = (1,1,1,1,1,1,1,1,1,1);
    println!("long tuple: {:?}", long_t);

    // destructuring
    let s: (i32, i32, u8) = (-30, -3222, 33);
    let (x, y, z) = s;

    println!("x = {}, y = {}, z = {}", x, y, z);

    // Tuple as Return type
    let (a, b) = sum_mul((2,3));

    println!("\na = {}, b = {}", a, b);
}

fn sum_mul(tup: (i32, i32)) -> (i32, i32) {
    (tup.0 + tup.1, tup.0 * tup.1)
}
