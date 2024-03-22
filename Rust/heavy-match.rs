fn main() {
    let o: Option<i32> = Some(7);
    
    match o{
        Some(i) => {
            println!("This is a really long string and '{:?}'", i);
            println!("Success using match!\n");
        }

        _ => {}
    }
    // the match block above can be replaced by if let
    // both the code blocks will have the same output
    // but the if let codeblock is cleaner and easier to understand
    if let Some(i) = o {
        println!("This is a really long string and '{:?}'", i);
        println!("Success using if let!");
    }
}
