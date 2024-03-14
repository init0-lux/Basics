// Diverging functions are functions which dont have a return value
// and dont let program continue after they are called

fn main() {
     never_ret();

     println!("Failed!");
}

fn never_ret() -> !{ // never returns a value, panics
     panic!();

     /* thread 'main' panicked at div_func.rs:11:6:
4 fn main() {                                                                               │explicit panic
    never_ret();
    note: run with `RUST_BACKTRACE=1` environment variable to display a backtrace
     */
}
