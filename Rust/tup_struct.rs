struct Color(i32, i32, i32);
struct Point(i32, i32, i32);

fn main(){
    //values accessed using point notation;
    let black = Color(0, 0, 0);
    let origin = Point(0, 0, 0);

    let x: i32 = black.0 + black.2 + origin.0 + origin.1;
    println!("{}", x);
}
