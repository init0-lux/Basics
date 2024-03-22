enum Message{
    Hello {id: i32},
}

fn main() {
    let msg: Message = Message::Hello { id: 5 };

    match msg{
        Message::Hello{ id: id @ 3..=7, } => {
            println!("Found an id in range [3,7]: {}", id);
        },
        // assigns new var 'newid' to id and checks it against 10 or 11 or 12
        Message::Hello{ id: newid @ (10 | 11 | 12) } => {
            println!("Found another id that is 10, 11, or 12: {}", newid);
        },
        Message::Hello{ id } => println!("Any other id: {}", id ),
    };
}
