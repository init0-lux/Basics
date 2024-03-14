fn main(){
    // bytes from hex using esc
    let byte_esc = "I love Ru\x73\x74!";
    println!("What are you doing\x3F\n(\\x3F -> ?)\n{}", byte_esc);

    // Unicode
    let uni_esc = "\u{211D}";
    let char_name = "\"Double-Struck Capital R\"";

    println!("Unicode char {} (U+211D) is called {}", uni_esc, char_name);

    let raw = r"Escapes dont work when using r and double quotes: \x3F \u{211D}";
    println!("{}", raw);
}
