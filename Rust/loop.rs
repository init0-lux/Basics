fn main() {
    let mut count: u32 = 0u32;
    println!("counting till infinity");

    // inf loop
    loop {
        count += 1;

        if count == 7{
            println!("seven");
            continue;
            panic!("seven omg omg omg");
        }

        println!("{}", count);

        if count == 10{
            println!("ok we stop");
            break;
        }
    }

    // Value assignment
    let mut counter: i32 = 0;
    let fin_val: i32 = loop{ 
        counter += 1;
        if counter == 40 {
            break counter; // breaks and gives counter to fin_val;
        }
    };

    assert_eq!(fin_val, 40);
}
