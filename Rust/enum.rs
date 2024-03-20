// defining a type with only one possible set of values
// useful in match statements

// fields are called Variants
enum IpAddr{
    v4(String),
    v6(String),
}

// instantiating the enum
// let home = IpAddr::v4(String::from("0.0.0.0"));
// let loopback=IpAddr::v6(String::from("::1"));

enum Message{
    Quit,
    Move { x: i32, y: i32},
    Write(String),
    ChangeColor(i32, i32, i32),
}

fn main(){
    let msg1 = Message::Move{ x: 1, y: 2};
    let msg2 = Message::Write(String::from("Hello, Enum!"));

    println!("Success!");
}
