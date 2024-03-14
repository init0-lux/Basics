fn main() {
    let x = 5u32;

    let y = {
        let x_s = x*x;
        let x_c = x_s*x;

        // This value will be finally stored in the var y;
        // Notice lack of semi colon in the last statment
        x_c + x_s + x
    };

    let z : () = {
        // The semicolon after the expression suppresses the value
        // therefore, z will be unit type
        2 * x;
    };

    // let v = (let x = 3); this is wrong syntax, can't do this
    let v = { let x = 3; x}; // This works

    println!("x is {:?}", x);
    println!("y is {:?}", y);
    println!("z is {:?}", z);
}
