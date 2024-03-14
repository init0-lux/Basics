fn main() {
    println!("Success!");
}

fn getopt( tp : u8 )  - Option<i32> {
    match tp {
        1 => { 
            // TODO
        }
        
        _ => { // If tp is anything but 1; analogous to `else`
            // TODO
        }
    }

    // Dont return None, use diverging func
    never_return_fn()
}

fn never_return_fn() -> ! {
    unimplemented!(); // used can function is unfinished, as a placeholder
    todo!()           // can also use this
}
