fn main() {
    let numbers = (2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048);

    match numbers{
        (first, .., last) => {
            assert!(first == 2);
            assert!(last == 2048)
        }
    }

    println!("Success!");
}
