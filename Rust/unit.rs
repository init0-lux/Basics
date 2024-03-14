// unit type is a type which doesnt hold any value
// size = 0 bytes
// analogous to unit vectors (phys + maths)
// if a function doesnt return anything, unit type is returned

use std::mem::size_of_val;

fn main () {
    let _v : () = ();

    let v: (i32, i32) = (2,3);
    assert_eq!(_v, implicity_ret_unit());
    assert_eq!(size_of_val(&_v), 0);
    println!("Success!");
}

fn implicity_ret_unit(){
    println!("function returns a ()");
}

// can annotate as well; might be useful for readability purposes;
fn explicitly_ret_unit() -> (){
    println!("Same as the prev func");
}
