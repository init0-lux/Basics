#[derive(Debug)]
struct Rect{
    width: u32,
    height: u32,
}

// impl keyword for implementing methods on a struct
impl Rect {
    fn area(&self) -> u32 {
        // no semicolon for assignment
        self.width * self.height
    }
}

let rect1 = Rect{
    width: 30,
    height: 30,
};

// called with struct.method format
println!("The area of the rectange is {} square pixels.", rect1.area());
