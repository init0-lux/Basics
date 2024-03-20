enum Coin{
    Penny, 
    Nickel,
    Dime,
    Quarter,
}

fn val_in_cent(coin: Coin) -> u8 {
    // if coin passed is penny, output is 1
    // if coin passed is nickel, output is 5
    // etc
    match coin { 
        Coin::Penny => 1,
        Coin::Nickel => 5,
        Coin::Dime => 10,
        Coin::Quarter => 25,
    }
}

//////// Match and enum
enum Message{
    Quit, 
    Move {x: i32, y: i32},
    Write(String),
}

fn main(){
    // In match, every case has to be handled. this leads to redundant boilerplate code
    let config_max = Some(4);
    match config_max{
        Some(max) => println!("The max is set at {}", max),
        _ => (), // any other value returns a unit type
    }

    // instead use let to unwrap a value from Option type, which is inbuilt
    // the 'if let' statement below does the same thing as match above
    let config_max = Some(2);
    if let Some(max) = config_max {
        println!("max is {}", max);
    }

    //////// Simple use case 
    let boolean: bool = true; 
    let bin: u8 = match boolean{
        true => 1, 
        false => 0,
    };

    assert_eq!(bin, 1);
    println!("Success.");

    // array wiith 3 enum -> Message variants
    let msgs: [Message; 3] = [
        Message::Quit,
        Message::Move{x: 3, y: 4}, 
        Message::Write(String::from("Hello"))
    ];

    for msg in msgs {
        show_msg(msg);
    }

}

fn show_msg(msg: Message) -> (){
    match msg{
        Message::Quit=> println!("Quit"),
        Message::Move{x, y}=> println!("Move: {}, {}", x, y),
        Message::Write(str)=> println!("{}", str),
    }
}
