fn main(){
    define_x();
    println!("{}, World!", define_x()); // error[E0425]: cannot find value `x` in this scope before calling
                               // define_x in this scope
}

fn define_x() {
    let x = "hello";
}
