fn main() {
    let x: u32 = 5; // i32 as type wont work; need unsigned to maintain continuity;
    assert_eq!("u32".to_string(), type_of(&x));

    println!("Success!");
}

fn type_of<T>(_: &T) -> String {
    format!("{}", std::any::type_name::<T>()) //"i32"
}
