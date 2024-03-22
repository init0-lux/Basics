// doesnt take an instance as parameter
// often used as constructor for a struct
// called in struct::func format

#[derive(Debug)]
struct Rect{
    w: u32,
    h: u32,
}

impl Rect {
    // return type is Rect. kind of recursive; calling struct and returning struct
    // constructing structs by using this func
    fn new(w: u32, h: u32) -> Rect {
        Rect{
            w,
            h,
        }
    }    
}

fn main() {
    let rec1: Rect = Rect::new(5, 10);
    println!("Rectangle: {:?}", rec1);
}
