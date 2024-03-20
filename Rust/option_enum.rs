/* 
enum Option<T> {
    None, 
    Some(T), // can hold any type T
}
*/
fn main(){
    let five: Option<i32> = Some(5); // holds Some(5), will hold Some(6)
    let six: Option<i32> = plus_one(five); // incremements previously declared five
    let none = plus_one(None); // will hold None

    // destructuring six and giving value to Some(n) -> n
    if let Some(n) = six {
        println!("{}", n);

        println!("Success!");
    } else{
        panic!("This won't run");
    }

    println!("{:?}, {:?}, {:?}", five, six, none);
}

fn plus_one( x: Option<i32> ) -> Option<i32> {
    // If the value passed is holding a value None,
    // None is returned
    //
    // If the var passed is holding a value of Some(i)
    // Some(i+1) is returned

    match x{
        None => None,
        Some(i) => Some(i+1),
    }
}
