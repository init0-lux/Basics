fn main() {
    let chars = ['a', 'E', 'I', '0', 'u'];

    for c in chars {
        assert!(matches!(c, 'A'..='Z' | 'a'..='z' | '0'..='9'));
    }

    println!("Success!");
}
