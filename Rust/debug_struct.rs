#[derive(Debug)]
struct Rect {
    width: u32,
    height: u32,
}

fn main() {
    let scale = 2;
    let rect1 = Rect{
        width: dbg!(30 * scale), // print the debug info to standard err
        height: 50, 
    };

    dbg!(&rect1); // prints debug info to stderr
    println!("{:?}", rect1); // :? -> placeholder notation; most types can be printed
}
