fn main() {
    let s = String::from("hello");

    owner_func(s); // passing s to this func also passes ownership to the func
                   // ie, s is not longer in this (main) scope
    
    let x = 5;
    makes_copy(x);

    //println!("{}, {}", s, x); // this will raise an error
                              // since s is no longer in this scope
    println!("{}", x);
}

// The lower parameter raised a warning; Rust wants you to use snake case;
// someStr -> some_str
fn owner_func( someStr : String ) { // passing string = passing string's pointer
                                     // = passing ownership
    println!("{}", someStr);
}

fn makes_copy( y: i32){ //passing value copies the value entirely
    println!("{}", y);
}
