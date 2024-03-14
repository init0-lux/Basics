fn main() {
    // boolean combinations
    assert!(true && false == false);
    assert!(true || false == true);
    assert!(!true == false);

    // Bitwise operations
    println!("0011 AND 0101 is {:04b}", 0b0011u32 & 0b0101);
    println!("0011 OR 0101 is {:04b}", 0b0011u32 | 0b0101);
    println!("0011 XOR 0101 is {:04b}", 0b0011u32 ^ 0b0101);
    println!("1 << 5 is {}", 1u32 << 5); // bitshift by 5 pos
                                         // 00000001 -> 00010000;
    println!("0x80 >> 2 is 0x{:x}", 0x80u32 >> 2);
    /* 
     * Outputs
    0011 AND 0101 is 0001
    0011 OR 0101 is 0111
    0011 XOR 0101 is 0110
    1 << 5 is 32
    0x80 >> 2 is 0x20
    */

}
